#ifndef MP3PLAYER_H_
#define MP3PLAYER_H_
#include "IMobileStorage.h"
#include <iostream>
class MP3Player:public IMobileStorage
{
public:
	__declspec(dllexport) MP3Player();
	__declspec(dllexport) ~MP3Player();
	__declspec(dllexport) void Read();
	__declspec(dllexport) void Write();
	__declspec(dllexport) void PlayMusic();
};
#endif