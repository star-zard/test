#ifndef COMPUTER_H_
#define COMPUTER_H_
#include "IMobileStorage.h"
class Computer
{
private:
	IMobileStorage* _useDrive;
public:
	Computer(){}
	~Computer(){}
	IMobileStorage* get()
	{
		return _useDrive;
	}
	void set(IMobileStorage *value)
	{
		_useDrive=value;
	}
	void Read()
	{
		_useDrive->Read();
	}
	void Write()
	{
		_useDrive->Write();
	}
};
#endif