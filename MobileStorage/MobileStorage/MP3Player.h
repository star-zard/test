#ifndef MP3PLAYER_H_
#define MP3PLAYER_H_
#include "IMobileStorage.h"
#include <iostream>
class MP3Player:public IMobileStorage
{
public:
	MP3Player(){}
	~MP3Player(){}
	void Read()
	{
		printf("Reading from MP3Player...\n");
		printf("Reading finished!\n");
	}
	void Write()
	{
		printf("Writeing from MP3Player...\n");
		printf("Writeing finished!\n");

	}
	void PlayMusic()
	{
		printf("Music is playing");
	}
};
#endif