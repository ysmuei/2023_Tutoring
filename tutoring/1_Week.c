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
/*
1주차 간단하게 출력함수와 입력함수에 대해 알아보고 
#include 와 기본 헤더파일인 <stdio.h>에 대하여 알아봄.
출력함수 printf("%(d, c, s, f)", (변수이름)); 변수 종류에 따라 출력 형식도 달라지는 것을 알아봄.
입력함수 scanf_s("%(d, c, s, f)", &(변수이름)); 입력함수는 주소 공간에 저장되기 때문에
변수이름 앞에 & 기호를 붙여줌 & 기호는 주소를 뜻함.

실행시 오류가 생기면 아래 출력창에 어느 지점에서 오류가 났는지,
어떤 오류인지 볼 수 있음. 
*/