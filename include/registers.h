#ifndef __REGISTERS_H
#define __REGISTERS_H
#define GENERAL_REGISTER_COUNT 16

struct Register_s {
	unsigned char V0;
	unsigned char V1;
	unsigned char V2;
	unsigned char V3;
	unsigned char V4;
	unsigned char V5;
	unsigned char V6;
	unsigned char V7;
	unsigned char V8;
	unsigned char V9;
	unsigned char VA;
	unsigned char VB;
	unsigned char VC;
	unsigned char VD;
	unsigned char VE;
	unsigned char VF;
};

class Registers
{
private:
  	unsigned char V[GENERAL_REGISTER_COUNT];
  	unsigned short I;
  	Register_s* generalRegisters;
public:
	Registers()
	{
		generalRegisters = (Register_s*)V;
        for (int i=0; i<GENERAL_REGISTER_COUNT; i++)
        	V[i] = 0;
        I = 0;
	}

	Register_s* getGeneralRegisters() {
		return generalRegisters;
	}

};
#endif
