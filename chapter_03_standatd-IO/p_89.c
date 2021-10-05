#include <stdio.h>

int main_p_89(void)
{
	int nAge = 0;
	int szName[32] = { 0 };

	printf("나이를 입력하세요. : ");
	scanf_s("%d", &nAge);
	/*scanf_s("%d%*c", &nAge);*/

	printf("이름을 입력하세요. : ");
	while (getchar() != '\n');
	gets_s(szName, sizeof(szName));

	printf("당신의 나이는 %d살이고 이름은 %s입니다.\n", nAge, szName);

	return 0;
}