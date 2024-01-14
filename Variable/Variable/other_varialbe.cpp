#include <stdio.h>

int main() {
	//int 형의 변수 a와 b를 값을 3으로 할당
	int a = 3; 
	int b = 3;
	printf("%d + %d = %d\n", a, b, a+b);
	//3+ 3 = 6출력

	int hap = a + b; // a와 b를 더한 값을 hap으로 지정
	printf("%d + %d = %d\n", a, b, hap);
	//hap 출력
}