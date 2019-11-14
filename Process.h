//---------------------------------------------------------------------------

#ifndef ProcessH
#define ProcessH
//void process_error(int32 , char *suffix);
void process_init(char *deviceName);
int process_read_port1(void);
void process_write_port0(int bitMask, int statepin);
enum{PIN_OFF,PIN_ON};
//---------------------------------------------------------------------------
#endif
