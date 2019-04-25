#include "stdafx.h"
#include "superadapter.h"
#include <iostream>
superadapter::superadapter()
{
}
superadapter::~superadapter()
{
}
super* superadapter::get()
{
	return _super;
}
void superadapter::set(super* value)
{
	_super=value;
}
void superadapter::Write()
{
	_super->Wt();
}
void superadapter::Read()
{
	_super->Rt();
}