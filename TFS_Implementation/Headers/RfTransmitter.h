
//fill here the commands that needs to be sent to RFdevice
#include "TransceiverTypes.h"

//fill here the exported interface
extern void InitRF_Transceiver(E_RF_DEVICE_TYPE Type);
extern void ConfigureTransceiver_forTx(void);
extern void ConfigureTransceiver_forRx(void);
extern void DeInitRF_Transceiver(E_RF_DEVICE_TYPE Type);
extern void RF_SignalReceived_IRQ_Notification(unsigned int timestamp);
extern void RF_TransceiverIRQ_TxHandler(void);
extern void RF_TransceiverIRQ_RxHandler(void);
extern void IO_Cfg_Init_RFTx_Function(void );
extern void IO_Cfg_Init_RFRx_Function(void ); 