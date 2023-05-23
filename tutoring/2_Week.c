#include <stdio.h>

void main() {

	int num = 150, i=0, j=0, num2=0;
	char ch = 'c', name[10] = "apple";

	printf("정수 출력 : %d\n", num);
	printf("문자 출력 : %c\n", ch);
	printf("문자열 출력 : %s\n", name);

	printf("구구단 출력\n");
	printf("몇단을 출력할까요? : ");
	scanf_s("%d", &num2);
	// for 라는 반복문을 사용하여 구구단을 작성. i가 1부터 9와 같을 때까지 반복하면서
	// i가 1씩 증가 
	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", num2, i, num2 * i);
	}
	int num3 = 0;
	printf("\n정수를 입력하세요 : ");
	scanf_s("%d", &num3);

	printf("10진수 : %d\n", num3); // 서식문자 : %d
	printf("8진수 : %o\n", num3); // 서식문자 : %o 
	printf("16진수(소문자) : %x\n", num3); // 서식문자 : %x
	printf("16진수(대문자) : %X\n", num3); // 서식문자 : %X
}