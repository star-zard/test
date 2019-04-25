#ifndef SUPERADAPTER_H_
#define SUPERADAPTER_H_
#include "IMobileStorage.h"
#include "../include/super.h"
class superadapter:public IMobileStorage
{
private:
	super* _super;
public:
	superadapter();
	~superadapter();
	super* get();
	void set(super*value);
	void Write();
	void Read();
};
#endif