#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void){
	struct jsu //구조체 선언
	{
		char nae[12]; // nae 문자 배열 선언
		int os, db, hab, hhab; //int형 변수 선언

	};

		struct jsu st[3] = { {"데이터1", 95, 88}, //3개 짜리 배열 st 중 1개를 선언하고, 초기화함
				     {"데이터2",84,91}, //3개 짜리 배열 st 중 2개를 선언하고, 초기화함
				     {"데이터3", 86 ,75} }; //3개 짜리 배열 st 중 3개를 선언하고, 초기화함
	
		struct jsu* p; // 구조체 jsu의 포인터 변수 p를 선언한다.
		p = &st[0]; // p에 st 배열의 첫 번째 요소의 주소를 저장한다.
		(p + 1)->hab = (p + 1)->os + (p + 2)->db; //hab에 p+1의 os 값과 p+2 값을 합친 값을 저장
		(p + 1)->hhab = (p + 1)->hab + p->os + p->db;  //hhab에 st[1]의 hab과 st[0]의 os값과 db 값을 합친 값 저장
		
		printf("(p + 1)->hab : %d\n", (p + 1)->hab); // hab 값 출력 (159)
		printf("(p + 1)->hhab : %d\n", (p + 1)->hhab); //hhab 값 출력 (342)

		printf("=================os=========== \n"); // 줄 바꿈
		printf("p ->os : %d\n", p ->os); //os 0번째 값 출력 (95)
		printf("(p + 0)->os : %d\n", (p + 0)->os); //os 0번째 값 출력 (95)
		printf("(p + 1)->os : %d\n", (p + 1)->os); //os 1번째 값 출력 (84)
		printf("(p + 2)->os : %d\n", (p + 2)->os); //os 2번째 값 출력 (86)

		printf("==============db=============\n"); //줄 바꿈
		printf("p ->db : %d\n", p->db); //db 0번째 값 출력 (88)
		printf("(p + 0)->db : %d\n", (p + 0)->db); // db 0번째 값 출력 (88)
		printf("(p + 1)->db : %d\n", (p + 1)->db); //db 1번째 값 출력 (91)
		printf("(p + 2)->db : %d\n", (p + 2)->db); //db 2번째 값 출력 (75)
}
