#include <stdio.h>

void main() {
	int num = 0, st_id = 0;
	char name[20];
	printf("201821241\n"); //��� �Լ��� ���� �й� ����ϱ�.
	printf("ȫ�浿\n"); //��� �Լ��� ���� �̸� ����ϱ�.

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d",  &num);//�Է��Լ��� �̿��Ͽ� ���� �Է¹ޱ�.
	printf("�Է��� ���ڴ� %d\n", num);

	printf("�й��� �Է��ϼ��� : ");
	scanf_s("%d", &st_id);
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, sizeof(name));//scanf_s�� ����� �� ������ ũ�⵵ ��������.

	printf("�й� : %d �̸� : %s", st_id, name);
}