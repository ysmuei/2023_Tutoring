#include <stdio.h>

void main() {

	int num = 150, i=0, j=0, num2=0;
	char ch = 'c', name[10] = "apple";

	printf("���� ��� : %d\n", num);
	printf("���� ��� : %c\n", ch);
	printf("���ڿ� ��� : %s\n", name);

	printf("������ ���\n");
	printf("����� ����ұ��? : ");
	scanf_s("%d", &num2);
	// for ��� �ݺ����� ����Ͽ� �������� �ۼ�. i�� 1���� 9�� ���� ������ �ݺ��ϸ鼭
	// i�� 1�� ���� 
	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", num2, i, num2 * i);
	}
	int num3 = 0;
	printf("\n������ �Է��ϼ��� : ");
	scanf_s("%d", &num3);

	printf("10���� : %d\n", num3); // ���Ĺ��� : %d
	printf("8���� : %o\n", num3); // ���Ĺ��� : %o 
	printf("16����(�ҹ���) : %x\n", num3); // ���Ĺ��� : %x
	printf("16����(�빮��) : %X\n", num3); // ���Ĺ��� : %X
}