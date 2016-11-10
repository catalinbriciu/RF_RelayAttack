#include "TransceiverTypes.h"
#include "SPIdrv.h"

//exported interface
void SPIdrv_Init(unsigned char NodeId)
{
	
}

void SPIdrv_SyncTransmit(unsigned char NodeId, unsigned short int NbOfBitsToSend, unsigned char *TxData, unsigned char *RxData)
{

}
uint8 SPIdrv_IsAvailable(unsigned char NodeId)
{
	return FALSE;
}

