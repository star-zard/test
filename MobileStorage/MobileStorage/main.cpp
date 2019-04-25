#include <iostream>
using namespace std;
#include "Computer.h"
#include "IMobileStorage.h"
#include "FlashDisk.h"
#include "MP3Player.h"
#include "MobileHardDisk.h"
#include "superdevice.h"
#include "SuperDeviceAdapter.h"
#include <iostream>
int main()
{
	Computer *computer=new Computer;
	MP3Player *mp3player=new MP3Player;
	MobileHardDisk *mobileharddisk=new MobileHardDisk;
	FlashDisk *flashdisk=new FlashDisk;
	//superdevice and adapter
	SuperDeviceAdapter *superdeviceadapter=new SuperDeviceAdapter;
	SuperDevice *superdevice=new SuperDevice;
	superdeviceadapter->set(superdevice);

	printf("now coming mp3player to write and read:\n");
	computer->set(mp3player);
	computer->Write();
	computer->Read();

	printf("now flashdisk:\n");
	computer->set(flashdisk);
	computer->Write(); 

	printf("now superdevice:\n");
	computer->set(superdeviceadapter);
	computer->Write();
	computer->Read();





}
