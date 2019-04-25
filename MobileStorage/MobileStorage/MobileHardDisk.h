#ifndef MOBILEHARDDISK_H_
#define MOBILEHARDDISK_H_
#include "IMobileStorage.h"
#include <iostream>
class MobileHardDisk:public IMobileStorage
{
public:
	MobileHardDisk(){}
	~MobileHardDisk(){}
	void Read()
	{
		printf("Reading from MobileHardDisk...\n");
		printf("Reading finished!\n");
	}
	void Write()
	{
		printf("Writeing from MobileHardDisk...\n");
		printf("Writeing finished!\n");

	}
};
#endif