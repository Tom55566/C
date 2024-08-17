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
		x = x + 1; /*先執行小循環(1x1=1)->(1x9=9)*/
	}
	printf("\n");
	y = y + 1; /*待小循環執行完畢後, y給予新數值並重複執行小循環直到(y <= 9)打印完畢*/
}


return 0;
}