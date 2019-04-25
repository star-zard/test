// computer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Computer.h"
#include "../include/MP3Player.h"
#include "../include/super.h"
#include "superadapter.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Computer *computer=new Computer;
	IMobileStorage *mp3=new MP3Player;

	superadapter *superada=new superadapter;
	super *sup=new super;
	superada->set(sup);

	printf("mp3 coming:\n");
	computer->set(mp3);
	computer->Read();
	
	printf("super coming\n");
	computer->set(superada);
	computer->Read();
	return 0;
}

