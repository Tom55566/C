#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char** argv)
{

	/*�m���D1*/
/*
	�ШϥΪ̿�J�~�֡A�Y�~�֥���18��, �L�X�U��
	�z����18��
	��18��, �h�L�X�U��
	�z�w��18��
*/
	int age = 5;
	int userage = age < 18;
	int b = 3;


	while (userage)
	{
		printf("�п�J�~��\n");
		scanf("%d", &age);
		userage = age < 18;
		b = age < 18;

		while (b)
		{
			printf("�z����18��\n");
			b = 0;
		}
		
	}

	printf("\n\n\n");
	printf("�z�w��18��\n\n\n");

	return 0;
}