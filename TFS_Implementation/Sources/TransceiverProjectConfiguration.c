//insert here the code
#include "RfTransmitter.h"
#include "TransceiverTypes.h"
#include "TransceiverProjectConfiguration.h"
/*
	uint8 u8_NodeId;
	uint8 u8_FreqBand;
	uint8 u8_NetworkId;
	uint8 u8_TxPower;
	uint8 u8_AirKbps; 
	uint8 u8_LowVoltageThreshold;
	uint8 u8_SPI_Id;
	IrqHandlerDef pf_IRQHandling;
*/
const E_TRx_NodeId NodeIDConfiguration[MAX_NB_OF_CONFIGS] =
{
	{ NODE_ID_CFG, E_RF12_433MHZ, NETWORK_ID_CFG, E_ZERO_db, E_115_2_kbps, E_RF12_2v75, SPI_UNIT_IDENTIFIER, &RF_TransceiverIRQ_TxHandler, &IO_Cfg_Init_RFTx_Function },
	{ NODE_ID_CFG, E_RF12_433MHZ, NETWORK_ID_CFG, E_ZERO_db, E_115_2_kbps, E_RF12_2v75, SPI_UNIT_IDENTIFIER, &RF_TransceiverIRQ_RxHandler, &IO_Cfg_Init_RFRx_Function }
};