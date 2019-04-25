#ifndef SUPER_H_
#define SUPER_H_
class super
{
public:
	__declspec(dllexport) super();
	__declspec(dllexport) ~super();
	__declspec(dllexport) void Rt();
	__declspec(dllexport) void Wt();
};
#endif