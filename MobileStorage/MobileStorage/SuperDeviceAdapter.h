#ifndef SUPERDEVICEADAPTER_H_
#define SUPERDEVICEADAPTER_H_
#include "IMobileStorage.h"
#include "superdevice.h"
#include <iostream>
class SuperDeviceAdapter:public IMobileStorage
{
private:
	SuperDevice *_superdevice;
public:
	SuperDeviceAdapter(){}
	~SuperDeviceAdapter(){}
	SuperDevice get()
	{
		return *_superdevice;
	}
	void set(SuperDevice *value)
	{
		_superdevice=value;
	}
	void Write()
	{
		_superdevice->Wt();
	}
	void Read()
	{
		_superdevice->Rt();
	}
};


#endif