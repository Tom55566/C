#include<stdio.h>

int main(int argc, char** argv)
{
	int Level = 3; /*�n�X�h*/
	int Blank = Level - 1; /*�Ů��(�h��-1=�Ů��)*/
	int Leave = 1; /*�P�P��(1���}�l)*/
	int WhichLevel;/*�@�X�h*/
	WhichLevel = 1;/*�Ĥ@�h�}�l*/
	
	int floor; /*����(�p�ƾ�)*/
	
	while (WhichLevel <= Level) /*���X�h*/
	{
		floor = 1; /*�p�ƾ��k1*/
		while (floor <= Blank) /*�C�@�h�ŴX��*/
		{
			printf(" ");
			floor += 1;
		}
		floor = 1; /*�p�ƾ��k1*/
		while (floor <= Leave) /*�C�@�h���X�ӬP*/
		{
			printf("*");
			floor += 1;
		}
		floor = 1; /*�p�ƾ��k1*/
		while (floor <= 1) /*�C�@�h�����ᴫ�@��*/
		{
			printf("\n");
			floor += 1;
		}

		Blank -= 1;      /*�C�@�h������l�[�@��*/
		Leave += 2;      /*�C�@�h������l�[�G���P*/
		WhichLevel += 1; /*�C�@�h������l�[�@�h*/


	}

	return 0;
}