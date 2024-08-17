#include<stdio.h>

int main(int argc, char** argv)
{
	int Level = 3; /*要幾層*/
	int Blank = Level - 1; /*空格數(層數-1=空格數)*/
	int Leave = 1; /*星星數(1顆開始)*/
	int WhichLevel;/*共幾層*/
	WhichLevel = 1;/*第一層開始*/
	
	int floor; /*次數(計數器)*/
	
	while (WhichLevel <= Level) /*做幾層*/
	{
		floor = 1; /*計數器歸1*/
		while (floor <= Blank) /*每一層空幾格*/
		{
			printf(" ");
			floor += 1;
		}
		floor = 1; /*計數器歸1*/
		while (floor <= Leave) /*每一層打幾個星*/
		{
			printf("*");
			floor += 1;
		}
		floor = 1; /*計數器歸1*/
		while (floor <= 1) /*每一層結束後換一行*/
		{
			printf("\n");
			floor += 1;
		}

		Blank -= 1;      /*每一層結束後追加一格*/
		Leave += 2;      /*每一層結束後追加二顆星*/
		WhichLevel += 1; /*每一層結束後追加一層*/


	}

	return 0;
}