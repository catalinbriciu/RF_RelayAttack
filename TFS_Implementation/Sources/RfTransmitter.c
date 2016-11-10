#include "Std_Types.h"
#include "TransceiverProjectConfiguration.h"

//global variables;

//local functions;

static void TransmitByte(uint8 ByteToSend, uint8 * ByteToRx)
{
	if(SPIdrv_IsAvailable(SPI_UNIT_IDENTIFIER) == TRUE)
	{
		SPIdrv_SyncTransmit(SPI_UNIT_IDENTIFIER,8u,&ByteToSend,ByteToRx);
	}
	else
	{
		//transmission cannot be done
	}
}
static void TransmitWord(uint16 WordToSent,uint8 * BytesToRx)
{

	if(SPIdrv_IsAvailable(SPI_UNIT_IDENTIFIER) == TRUE)
	{
		SPIdrv_SyncTransmit(SPI_UNIT_IDENTIFIER, 16u, (uint8 *)&WordToSent, BytesToRx);
	}
	else
	{
		//transmission cannot be done
	}
}
void ConfigureTransceiver_forTx(uint8 configuration_Id)
{

}
void ConfigureTransceiver_forRx(uint8 configuration_Id)
{
	
}

//exported functions
void InitRF_Transceiver(E_RF_DEVICE_TYPE Type,uint8 configuration_Id)
{

}

void DeInitRF_Transceiver(E_RF_DEVICE_TYPE Type,uint8 configuration_Id)
{

}
void RF_SignalReceived_IRQ_Notification(unsigned int timestamp)
{
	
}

void RF_TransceiverIRQ_TxHandler(void)
{
	
}
void RF_TransceiverIRQ_RxHandler(void)
{

}

void IO_Cfg_Init_RFTx_Function(void )
{
	
}
void IO_Cfg_Init_RFRx_Function(void )
{

}