//사각형 및 타원형 출력 코드
#include "pch.h" //컴파일 속도 향상
#include"tipsware.h" // <-easywin32 기능을 사용하기 위해
//직사각형을 출력하는 코드입니다.
NOT_USE_MESSAGE

int main() {
	ChangeWorkSize(1050, 1200);   // 작업 영역을 설정한다.

	// 글꼴 consolas 글자 크기 12 지정
	SelectFontObject("consolas", 12, 0);

	// 글꼴 색상을 지정
	SetTextColor(RGB(118, 228, 28));

	SelectPenObject(RGB(10, 28, 28), 1, PS_SOLID); // 선색 변경

	for (int x = 0; x < 18; x++) //좌표 최댓 값 지정
	{
		Line(x * 50, 0, x * 50, 1000);// 수직선 출력
		printf(x * 70, 0, "%d", x * 70);// 가로행 좌표값 출력
		//좌표 값을 몇 씩 증가 시킬지 결정
	}
	for (int y = 0; y < 18; y++) //세로행 좌표 값 지정
	{
		Line(0, y * 50, 1000, y * 50); // 수평선 출력
		printf(0, y * 70, "%d", y * 70); // 세로행 좌표 값 출력
	}

	Ellipse(150, 100, 200, 150);// 동그라미 출력
	RECT r = { 50, 50, 30, 65}; // 사각형 크기 지정
	Rectangle(&r);// 사각형 출력
	Line(100, 300, 100, 350);// 선 출력
	PieDegree(50, 350, 100, 400, 0, 90);// , , , ,왼쪽 각도,오른쪽 각도 지정,

	SelectPenObject(RGB(80, 162, 232), 5, PS_DOT | PS_GEOMETRIC);// 점점이 선으로 설정
	Ellipse(210, 100, 250, 150);// 동그라미 출력
	SetRect(&r, 90, 50, 60, 65); // 사각형 크기 설정
	Rectangle(&r); // 사각형 출력
	Line(150, 300, 150, 350);// 선 출력
	PieDegree(100, 350, 200, 400, 60, 0);// , , , ,왼쪽 각도,오른쪽 각도 지정,

	SelectPenObject(RGB(80, 162, 232), 2, PS_DOT | PS_GEOMETRIC);// 점점이 선으로 설정
	Ellipse(260, 100, 300, 150);// 동그라미 출력
	Line(200, 300, 200, 350);// 선 출력
	PieDegree(350, 350, 300, 400, 90, 0);// , , , ,왼쪽 각도,오른쪽 각도 지정,
	Rectangle(170, 50, 150, 65);// 사각형 출력 

	SelectBrushObject(RGB(90, 103, 139));// 3,4번째 사각형 색 채우기
	Ellipse(310, 100, 350, 150);// 동그라미 출력
	Rectangle(180, 50, 200, 65);// 사각형 출력
	Line(250, 300, 250, 350);// 선 출력
	PieDegree(450, 350, 400, 400, 160, 250);// , , , ,왼쪽 각도,오른쪽 각도 지정,


	SelectPenObject(RGB(80, 162, 232)); // 맨 마지막 사각형의 선 색깔 설정
	Rectangle(280, 50, 250, 65); // 사각형 출력
	Ellipse(350, 100, 400, 150);// 동그라면 출력
	PieDegree(650, 350, 550, 400, 60, 0);// , , , ,왼쪽 각도,오른쪽 각도 지정,
	Line(300, 300, 300, 350, RGB(210, 22, 35));// 선 출력, 색 별도 지정

	ShowDisplay(); // 사용자가 구성한 정보를 윈도우에 출력하기 위해
	return 0;

}
