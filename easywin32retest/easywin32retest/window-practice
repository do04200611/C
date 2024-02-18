//사각형 및 타원형 출력 코드
#include "pch.h" //컴파일 속도 향상
#define _USE_INIT_WINDOW_// 윈도우 전역 초기화 함수를 직접 구현하도록 지정
#include"tipsware.h" // <-easywin32 기능을 사용하기 위해

void InitWindow()
{
	//창 제목을 수정한다.
	 gp_window_title = "안녕하세요";

	 //윈도우 속성을 수정한다.
	 g_wnd_style = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_THICKFRAME ;
}

//직사각형을 출력하는 코드입니다.
NOT_USE_MESSAGE

int main() {
	ChangeWorkSize(1050, 1200);   // 작업 영역을 설정한다.
	//ChangeWorkSize 함수는 작업 영역의 폭 높이 조정하는 함수
	Clear(0, RGB(80,162,32) ); // 윈도우 배경색 지정

	SelectBrushObject(RGB(80, 162, 32)); // 블러시 색상 지정
	SelectStockObject(NULL_BRUSH);// 블러시를 사용하지 않도록 설정
	Rectangle(5, 5, 625, 245);

	// 글꼴 consolas 글자 크기 12 지정 
	SelectFontObject("consolas", 12, 0);

}
