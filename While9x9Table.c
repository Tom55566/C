#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(int argc, char** argv)
{
int y;
y = 1;
int x;

while (y <= 9)
{
	x = 1;
	while (x <= 9) 
	{
		int product = y * x;
		printf("(%dx%d=", y, x);
		if (product < 10)
		{
			printf("0");
		}
		printf("%d)", product);
		x = x + 1; /*������p�`��(1x1=1)->(1x9=9)*/
	}
	printf("\n");
	y = y + 1; /*�ݤp�`�����槹����, y�����s�ƭȨí��ư���p�`������(y <= 9)���L����*/
}


return 0;
}