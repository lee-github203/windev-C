#include <stdio.h>

int main_p_89(void)
{
	int nAge = 0;
	int szName[32] = { 0 };

	printf("���̸� �Է��ϼ���. : ");
	scanf_s("%d", &nAge);
	/*scanf_s("%d%*c", &nAge);*/

	printf("�̸��� �Է��ϼ���. : ");
	while (getchar() != '\n');
	gets_s(szName, sizeof(szName));

	printf("����� ���̴� %d���̰� �̸��� %s�Դϴ�.\n", nAge, szName);

	return 0;
}