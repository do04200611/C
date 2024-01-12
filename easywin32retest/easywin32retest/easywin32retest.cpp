#include "pch.h" //컴파일 속도 향상
#include"tipsware.h" // <-easywin32 기능을 사용하기 위해

NOT_USE_MESSAGE
int main() {

	for (int i = 1; i < 100; i++) {
		//구구단 출력
		printf(20, 5 + i * 20, RGB(128, 0, 128), "2* %d = %d", i, 2 * i);
	}

	//글자 색깔 지정
	SetTextColor(RGB(255, 2, 255));
	//글자 체 지정
	SelectFontObject("굴림체", 32);
	//Tipsware를 지정 좌표로 출력
	printf(100, 100, "Tipsware \n어디에요"); //Tipsware 설정된 좌표에 출력하기
	
	//글자 색깔 지정
	SetTextColor(RGB(25, 25, 255));
	//글자 체 지정
	SelectFontObject("궁서체", 32);
	//Tipsware를 지정 좌표로 출력
	printf(100, 200, "Tipsware"); //Tipsware 설정된 좌표에 출력하기

	ShowDisplay(); // 사용자가 구성한 정보를 윈도우에 출력하기 위해
	return 0;

}
