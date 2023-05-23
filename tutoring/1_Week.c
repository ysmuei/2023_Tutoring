#include <stdio.h>

void main() {
	int num = 0;
	printf("201821241\n"); //출력 함수를 통해 학번 출력하기.
	printf("홍길동\n"); //출력 함수를 통해 이름 출력하기.

	printf("숫자를 입력하세요 : ");
	scanf_s("%d",  &num);
	printf("입력한 숫자는 %d\n", num);
}
