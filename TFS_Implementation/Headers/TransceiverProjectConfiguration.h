//insert here the code
#include "Std_Types.h"
#include "TransceiverTypes.h"
#include "SPIdrv.h"

//number of active configurations
#define MAX_NB_OF_CONFIGS 2u

//type of the device for the compiled code
#define TRANSCEIVER_TYPE E_RF_TRANSMITTER

//number of crypted bytes in the received telegram
#define NB_CRYPTED_BYTES 8u

//maximum number of bytes that can be received/transmitted during a communication attempt
#define MAX_NB_OF_BYTES 12u

//ID of the SPI driver which needs to be used
#define SPI_UNIT_IDENTIFIER 0u

//--------------------HW specific definitions
//ammount of the ms needed for the TRx to initialize from a power up
#define POWER_UP_MAX_MS 2500u
//---------------------------------------------

//--------------------NODE DEFINITION--------------------
//identifier of the node id
#define NODE_ID_CFG 0x12u
//identifier of the node id
#define NETWORK_ID_CFG 0x12u
//---------------------END NODE CONFIGURATION

//--------------------STRUCTURE DEFINITION--------------------
//payload size into tx data
#define TX_DATA_PAYLOAD_SIZE 8u
//header size into tx data
#define TX_DATA_HEADER_SIZE 2u

//--------------------END STRUCTURE CONFIGURATION DATA------------

typedef struct 
{
	unsigned char u8_SyncByte_1;
	unsigned char u8_SyncByte_2;
	unsigned char u8_Preamble_1;
	unsigned char u8_Preamble_2;
	unsigned char u8_CryptedBytes[NB_CRYPTED_BYTES];
	unsigned char u8_CRC_HighNibble;
	unsigned char u8_CRC_LowNibble;
}RF_TxRx_S_Data;

typedef struct 
{
	uint8 au8_PayloadData[TX_DATA_PAYLOAD_SIZE];
	uint8 au8_HeaderData[TX_DATA_HEADER_SIZE];
}E_TRx_DataForSending;

typedef union 
{
	E_TRx_DataForSending rs_DataToSend;
	uint8 Tx_Data[MAX_NB_OF_BYTES];
}E_TX_Data;

typedef struct 
{
	uint8 au8_PayloadData[TX_DATA_PAYLOAD_SIZE];
	uint8 au8_HeaderData[TX_DATA_HEADER_SIZE];
}E_TRx_DataForReceiving;

typedef union 
{
	E_TRx_DataForReceiving rs_DataToReceive;
	uint8 Rx_Data[MAX_NB_OF_BYTES];
}E_RX_Data;

//extern tables/variables
extern const E_TRx_NodeId NodeIDConfiguration[MAX_NB_OF_CONFIGS];
