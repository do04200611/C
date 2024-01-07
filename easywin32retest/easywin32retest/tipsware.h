#ifndef _TIPSWARE_H_
#define _TIPSWARE_H_

/*  [ �⺻ ���� �ڵ� ]
#include "pch.h"
#include "tipswre.h"

NOT_USE_MESSAGE

int main()
{
	// �����ܿ��� 2���� ����Ѵ�.
	for (int i = 1; i < 10; i++) {
		// (20, 5+i*20) ��ǥ��  RGB(0, 200, 255) �������� ���!
		printf(20, 5+i*20, RGB(0, 200, 255), "2 * %d = %d", i, 2 * i);
	}

	ShowDisplay(); // ������ �����쿡 ����Ѵ�.
	return 0;
}
*/

#include "framework.h"
#include "resource.h"
#include "EasyWin32.h"

#pragma comment(lib, "gdiplus")
#pragma comment(lib, "Msimg32.lib")

#ifdef _DEBUG
	#pragma comment(lib, "DSH_EasyWin32.lib")
#else
	#pragma comment(lib, "RST_EasyWin32.lib")
#endif

// �Ʒ��� �� ���� ������ �ʼ� �����Դϴ�!! (���� ���α׷� �̸��� â ���� ����)
const char *gp_app_name = "EasyMyWindow";
const char *gp_window_title = "https://blog.naver.com/tipsware";

using namespace EasyAPI_Tipsware;

#define printf TextOut

#define TIMER void CALLBACK
#define NOT_USE_TIMER_DATA HWND ah_wnd, UINT a_msg_id, UINT_PTR a_timer_id, DWORD a_time

#define NOT_USE_MESSAGE SystemMessageMap g_system_map(NULL, NULL, NULL, NULL);
#define MOUSE_MESSAGE(left_down, left_up, move) SystemMessageMap g_system_map(left_down, left_up, move, NULL);
#define MOUSE_CMD_MESSAGE(left_down, left_up, move, command) SystemMessageMap g_system_map(left_down, left_up, move, command);
#define CMD_MESSAGE(command) SystemMessageMap g_system_map(NULL, NULL, NULL, command);

#endif