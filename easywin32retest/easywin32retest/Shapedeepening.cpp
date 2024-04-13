//도형을 출력하는 깊이 있게 정리한 코드입니다.

//사각형 및 타원형 출력 코드
#include "pch.h" //컴파일 속도 향상
#define _USE_INIT_WINDOW_// 윈도우 전역 초기화 함수를 직접 구현하도록 지정
#include"tipsware.h" // <-easywin32 기능을 사용하기 위해

void InitWindow()
{
	//창 제목을 수정한다.
	gp_window_title = "안녕하세요";

	//윈도우 속성을 수정한다.
	g_wnd_style = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_THICKFRAME;
}

//직사각형을 출력하는 코드입니다.
NOT_USE_MESSAGE

int main() {
	ChangeWorkSize(1050, 1200);   // 작업 영역을 설정한다.
	//ChangeWorkSize 함수는 작업 영역의 폭 높이 조정하는 함수
	Clear(0, RGB(80, 162, 32)); // 윈도우 배경색 지정

	SelectPenObject(RGB(200, 20, 2));// 원의 선 색 따로 지정
	SelectBrushObject(RGB(50, 20, 255)); // 원의  색 따로 지정
	Ellipse(300, 300, 400, 400);// 원 출력
	//Ellipse(100, 100, 300, 300, RGB(50,180,255)); // 원 출력 및 선색도 지정

	//SelectPenObject(RGB(100, 10, 222), 5, PS_DOT);// 사각형 색 따로 지정
	SelectPenObject(RGB(100, 10, 222), 3, PS_DOT | PS_GEOMETRIC);// 사각형 색 따로 지정, 선굵기 및 점선 지정
	SelectBrushObject(RGB(230, 200, 25)); // 사각형의  색 따로 지정
	Rectangle(350, 350, 450, 450);// 사각형 출력

	SelectPenObject(RGB(100, 10, 222), 5, PS_DOT );// 사각형 색 따로 지정, 선굵기 및 점선 지정
	SelectBrushObject(RGB(80, 162, 32)); // 블러시 색상 지정
	SelectStockObject(NULL_BRUSH);// 블러시를 사용하지 않도록 설정
	Rectangle(5, 5, 625, 245);// 사각형 출력

 //TextOut 와 DrawText의 기능 차이 알기
	//TextOut(180, 180, "김강현"); // 글자 출력[ 한점을 지정해서 출력하는 기능]

	RECT r = { 350, 350, 700, 700 };// 문자열이 출력될 영역 지정

	SetTextColor(RGB(233, 233, 242));// 문자열 색 지정
	SelectFontObject("배달의 민족 주아", 50); // 문자열에 쓸 글꼴, 글자 크기 지정
	//| DT_VCENTER 가운데 정렬이며,
	DrawText(&r, DT_CENTER | DT_VCENTER | DT_SINGLELINE,  "김강현"); // 글자 출력 

	SetTextColor(RGB(233, 233, 242));// 문자열 색 지정
	SelectFontObject("굴림", 10); // 문자열에 쓸 글꼴, 글자 크기 지정
	//DrawText(&r, DT_CENTER | DT_VCENTER, "강"); // 글자 출력 
	DrawText(&r, DT_RIGHT, "강"); // 글자 출력(우측 상단 지정) 

	//RECT r2 = { 750, 750, 900, 900 };// 문자열이 출력될 영역 지정
	SelectFontObject("궁서", 50); // 문자열에 쓸 글꼴, 글자 크기 지정
	DrawText(&r, DT_LEFT, "현"); // 글자 출력(왼쪽 상단 지정) 
	
	// 글꼴 consolas 글자 크기 12 지정 
	SelectFontObject("consolas", 12, 0);

}
