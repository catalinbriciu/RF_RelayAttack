#ifndef TRANSCEIVER_TYPES_H
#define TRANSCEIVER_TYPES_H
//insert here the code
#include "Std_Types.h"

typedef void (*IrqHandlerDef)(void);

typedef void (*IO_ConfigurationUnitInitFunction)(void);

typedef enum
{
	E_RF12_315MHZ = 0x00u,
	E_RF12_433MHZ,
	E_RF12_868MHZ,
	E_RF12_915MHZ
}E_PossibleFrequency;

typedef enum 
{
	E_RF12_2v25 = 0x00u,
	E_RF12_2v55 = 0x03u,
	E_RF12_2v65 = 0x04u,
	E_RF12_2v75 = 0x05u,
	E_RF12_3v05 = 0x08u,
	E_RF12_3v15 = 0x09u,
	E_RF12_3v25 = 0x0Au
}LowBatThreshold;

typedef enum 
{
	E_1_2_kbps = 0u,
	E_2_4_kbps,
	E_4_8_kbps,
	E_9_6_kbps,
	E_19_2_kbps,
	E_38_4_kbps,
	E_57_6_kbps,
	E_115_2_kbps
}E_KbpsValues;

typedef enum 
{
	E_ZERO_db = 0,
	E_2_5_db,
	E_5_0_db,
	E_7_5_db,
	E_10_0_db,
	E_12_5_db,
	E_15_0_db,
	E_17_5_db
}E_OutputPower;

typedef enum 
{
	E_RF_RECEIVER_ON = 0x82DDu,
	E_RF_XMITTER_ON = 0x823Du,
	E_RF_IDLE_MODE = 0x820Du,
	E_RF_SLEEP_MODE = 0x8205u,
	E_RF_WAKEUP_MODE = 0x8207u,
	E_RF_TXREG_WRITE = 0xB800u,
	E_RF_RX_FIFO_READ = 0xB000u,
	E_RF_WAKEUP_TIMER = 0xE000u,
	E_RF_DUMMY_CMD = 0x0000u //used for avoiding of the startup issues
}E_RF12B_POSSIBLE_CMDs;


typedef enum 
{
	E_RF_LBD_BIT = 0x0400u,
	E_RF_RSSI_BIT = 0x0100u
}E_RF12B_STATUS_BITS;

typedef enum 
{
	E_RF_TRANSMITTER,
	E_RF_RECEIVER,
	E_RF_TRANSCEIVER
}E_RF_DEVICE_TYPE;

typedef enum 
{
	E_TX_SENDING_STARTED = 0,
	E_TX_SENDING_SYNC_BYTE_1,
	E_TX_SENDING_SYNC_BYTE_2,
	E_TX_SENDING_PREAMBLE_BYTES,
	E_TX_SENDING_DATA_BYTES,
	E_TX_SENDING_CRC_BYTE_1,
	E_Tx_SENDIng_CRC_BYTE_2
}E_Tx_STATES;

typedef enum 
{
	E_Rx_RECEIVING_STARTED,
	E_RX_RECEIVING_IN_PROGRESS,
	E_RX_RECEIVING_FINISHED,
	E_RX_RECEIVING_IDLE
}E_Rx_States;

typedef struct
{
	uint8 u8_NodeId;
	uint8 u8_FreqBand;
	uint8 u8_NetworkId;
	uint8 u8_TxPower;
	uint8 u8_AirKbps; 
	uint8 u8_LowVoltageThreshold;
	uint8 u8_SPI_Id;
	IrqHandlerDef pf_IRQHandling;
	IO_ConfigurationUnitInitFunction pf_IOConfigurationIOCallback;
}E_TRx_NodeId;


#endif //TRANSCEIVER_TYPES_H