#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char** argv)
{

	/*練習題1*/
/*
	請使用者輸入年齡，若年齡未滿18歲, 印出下行
	您未滿18歲
	滿18歲, 則印出下行
	您已滿18歲
*/
	int age = 5;
	int userage = age < 18;
	int b = 3;


	while (userage)
	{
		printf("請輸入年齡\n");
		scanf("%d", &age);
		userage = age < 18;
		b = age < 18;

		while (b)
		{
			printf("您未滿18歲\n");
			b = 0;
		}
		
	}

	printf("\n\n\n");
	printf("您已滿18歲\n\n\n");

	return 0;
}