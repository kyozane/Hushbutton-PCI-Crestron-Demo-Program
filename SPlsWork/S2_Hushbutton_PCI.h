#ifndef __S2_HUSHBUTTON_PCI_H__
#define __S2_HUSHBUTTON_PCI_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Hushbutton_PCI_DEBUG_DIG_INPUT 0
#define __S2_Hushbutton_PCI_CONNECT_DIG_INPUT 1

#define __S2_Hushbutton_PCI_RED_LED_ON_DIG_INPUT 2
#define __S2_Hushbutton_PCI_RED_LED_ON_ARRAY_LENGTH 9
#define __S2_Hushbutton_PCI_GREEN_LED_ON_DIG_INPUT 11
#define __S2_Hushbutton_PCI_GREEN_LED_ON_ARRAY_LENGTH 9
#define __S2_Hushbutton_PCI_LED_TOGGLE_DIG_INPUT 20
#define __S2_Hushbutton_PCI_LED_TOGGLE_ARRAY_LENGTH 8
#define __S2_Hushbutton_PCI_LED_OFF_DIG_INPUT 28
#define __S2_Hushbutton_PCI_LED_OFF_ARRAY_LENGTH 9
#define __S2_Hushbutton_PCI_POLL_DIG_INPUT 37
#define __S2_Hushbutton_PCI_POLL_ARRAY_LENGTH 9

/*
* ANALOG_INPUT
*/

#define __S2_Hushbutton_PCI_DEVICE_IP_ADDRESS_STRING_INPUT 0
#define __S2_Hushbutton_PCI_DEVICE_IP_ADDRESS_STRING_MAX_LEN 16
CREATE_STRING_STRUCT( S2_Hushbutton_PCI, __DEVICE_IP_ADDRESS, __S2_Hushbutton_PCI_DEVICE_IP_ADDRESS_STRING_MAX_LEN );
#define __S2_Hushbutton_PCI_TCPSOCKET_TX$_STRING_INPUT 1
#define __S2_Hushbutton_PCI_TCPSOCKET_TX$_STRING_MAX_LEN 64
CREATE_STRING_STRUCT( S2_Hushbutton_PCI, __TCPSOCKET_TX$, __S2_Hushbutton_PCI_TCPSOCKET_TX$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_Hushbutton_PCI_CONNECT_STATUS_DIG_OUTPUT 0

#define __S2_Hushbutton_PCI_RED_LED_IS_ON_DIG_OUTPUT 1
#define __S2_Hushbutton_PCI_RED_LED_IS_ON_ARRAY_LENGTH 8
#define __S2_Hushbutton_PCI_GREEN_LED_IS_ON_DIG_OUTPUT 9
#define __S2_Hushbutton_PCI_GREEN_LED_IS_ON_ARRAY_LENGTH 8
#define __S2_Hushbutton_PCI_PCM_RELAY_IS_CLOSED_DIG_OUTPUT 17
#define __S2_Hushbutton_PCI_PCM_RELAY_IS_CLOSED_ARRAY_LENGTH 8
#define __S2_Hushbutton_PCI_PRESS_DIG_OUTPUT 25
#define __S2_Hushbutton_PCI_PRESS_ARRAY_LENGTH 8

/*
* ANALOG_OUTPUT
*/
#define __S2_Hushbutton_PCI_TCP_CONNECT_STATUS_ANALOG_OUTPUT 0

#define __S2_Hushbutton_PCI_TCPSOCKET_RX$_STRING_OUTPUT 1


/*
* Direct Socket Variables
*/

#define __S2_Hushbutton_PCI_TCP_CLIENT_TCPSOCKET_SOCKET 2
#define __S2_Hushbutton_PCI_TCP_CLIENT_TCPSOCKET_STRING_MAX_LEN 64
START_SOCKET_DEFINITION( S2_Hushbutton_PCI, __TCP_CLIENT_TCPSOCKET )
{
   int SocketStatus;
   enum ESplusSocketType eSocketType;
   int SocketID;
   void *SocketPtr;
CREATE_SOCKET_STRING( S2_Hushbutton_PCI, SocketRxBuf, __S2_Hushbutton_PCI_TCP_CLIENT_TCPSOCKET_STRING_MAX_LEN );
};



/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/
#define __S2_Hushbutton_PCI_DEVICE_PORT_STRING_PARAMETER 10
#define __S2_Hushbutton_PCI_DEVICE_PORT_PARAM_MAX_LEN 4
CREATE_STRING_STRUCT( S2_Hushbutton_PCI, __DEVICE_PORT, __S2_Hushbutton_PCI_DEVICE_PORT_PARAM_MAX_LEN );


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_Hushbutton_PCI_SMSG_STRING_MAX_LEN 64
CREATE_STRING_STRUCT( S2_Hushbutton_PCI, __SMSG, __S2_Hushbutton_PCI_SMSG_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Hushbutton_PCI )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __RED_LED_ON );
   DECLARE_IO_ARRAY( __GREEN_LED_ON );
   DECLARE_IO_ARRAY( __LED_TOGGLE );
   DECLARE_IO_ARRAY( __LED_OFF );
   DECLARE_IO_ARRAY( __POLL );
   DECLARE_IO_ARRAY( __RED_LED_IS_ON );
   DECLARE_IO_ARRAY( __GREEN_LED_IS_ON );
   DECLARE_IO_ARRAY( __PCM_RELAY_IS_CLOSED );
   DECLARE_IO_ARRAY( __PRESS );
   unsigned short __NBUSY;
   short __ISTATUS;
   DECLARE_STRING_STRUCT( S2_Hushbutton_PCI, __SMSG );
   DECLARE_STRING_STRUCT( S2_Hushbutton_PCI, __DEVICE_IP_ADDRESS );
   DECLARE_STRING_STRUCT( S2_Hushbutton_PCI, __TCPSOCKET_TX$ );
   DECLARE_SOCKET( S2_Hushbutton_PCI, __TCP_CLIENT_TCPSOCKET );
   DECLARE_STRING_STRUCT( S2_Hushbutton_PCI, __DEVICE_PORT );
};

START_NVRAM_VAR_STRUCT( S2_Hushbutton_PCI )
{
};



#endif //__S2_HUSHBUTTON_PCI_H__
