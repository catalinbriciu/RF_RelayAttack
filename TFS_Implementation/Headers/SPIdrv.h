#ifndef SPI_DRV_H
#define SPI_DRV_H
//insert here the code
#include "TransceiverTypes.h"

void SPIdrv_Init(unsigned char NodeId);
void SPIdrv_SyncTransmit(unsigned char NodeId, unsigned short int NbOfBitsToSend, unsigned char *TxData, unsigned char *RxData);
uint8 SPIdrv_IsAvailable(unsigned char NodeId);

#endif //SPI_DRV_H