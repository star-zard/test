#ifndef FLASHDISK_H_
#define FLASHDISK_H_
#include "IMobileStorage.h"
#include <iostream>
class FlashDisk:public IMobileStorage
{
public:
	FlashDisk(){}
	~FlashDisk(){}
	void Read()
	{
		printf("Reading from FlashDisk...\n");
		printf("Reading finished!\n");
	}
	void Write()
	{
		printf("Writeing from FlashDisk...\n");
		printf("Writeing finished!\n");
	}
};

#endif 