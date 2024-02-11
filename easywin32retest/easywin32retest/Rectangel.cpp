//사각형 및 타원형 출력 코드
#include "pch.h" //컴파일 속도 향상
#include"tipsware.h" // <-easywin32 기능을 사용하기 위해
//직사각형을 출력하는 코드입니다.
NOT_USE_MESSAGE

int main() {

	for (int x = 0; x < 16; x++) //좌표 최댓 값 지정
	{
		printf(x * 70, 0, "%d", x * 70);// 가로행 좌표값 출력
		//좌표 값을 몇 씩 증가 시킬지 결정
	}
	for (int y = 0; y < 16; y++) //세로행 좌표 값 지정
	{
		printf(0,y* 50, "%d", y * 50);
	}


	Rectangle(50, 100, 30, 65);// (크기 ,세로 행,크기, 위치, ) 사각형 출력

	Rectangle(90,100, 200, 65);

	Rectangle(130, 100, 250, 65);

	Rectangle(180, 100, 300, 65);

	ShowDisplay(); // 사용자가 구성한 정보를 윈도우에 출력하기 위해
	return 0;

}
