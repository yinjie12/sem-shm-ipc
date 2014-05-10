#ifndef DHMANAGER_H
#define DHMANAGER_H

#include "../frontdevice.h"
#include "dhnetsdk.h"


struct dhdevice
{
	struct device 	dev;
	LLONG    		loginid;
	long			voicehandle;//对讲句柄
	long            audiohandle;//              音频信息;
	NET_DEVICEINFO  info;
	int             ProtoVer;  //大华自己的网络协议版本号
};

struct dhchannel
{
	struct channel chn;
};

struct dhstream
{
	struct stream stm;
	long playhandle;
	int  currentencode;//当前是何种编码，xm的回调里没有说明，
};

extern "C" int dh_lib_init();
extern "C" struct dhdevice *dh_alloc_device();

#define DH_INVALIDE_LOGINID    -1
#define DH_INVALIDE_PLAYHANDLE -1

#endif
