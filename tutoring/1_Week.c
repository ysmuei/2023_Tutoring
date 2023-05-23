#include <stdio.h>

void main() {
	int num = 0, st_id = 0;
	char name[20];
	printf("201821241\n"); //출력 함수를 통해 학번 출력하기.
	printf("홍길동\n"); //출력 함수를 통해 이름 출력하기.

	printf("숫자를 입력하세요 : ");
	scanf_s("%d",  &num);//입력함수를 이용하여 숫자 입력받기.
	printf("입력한 숫자는 %d\n", num);

	printf("학번을 입력하세요 : ");
	scanf_s("%d", &st_id);
	printf("이름을 입력하세요 : ");
	scanf_s("%s", name, sizeof(name));//scanf_s를 사용할 시 변수의 크기도 지정해줌.

	printf("학번 : %d 이름 : %s", st_id, name);
}