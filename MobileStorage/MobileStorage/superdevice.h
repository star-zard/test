#ifndef SUPERDEVICE_H_
#define SUPERDEVICE_H_
#include <iostream>
class SuperDevice
{
public:
	SuperDevice(){}
	~SuperDevice(){}
	void Rt()
	{
		printf("Reading from superdevice...\n");
		printf("Reading finished!\n");
	}
	void Wt()
	{
		printf("Writeing from superdevice...\n");
		printf("Writeing finished!\n");

	}
};
#endif