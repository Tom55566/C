#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(int argc, char** argv)
{

   int Max;
   int condition1 = 11;
   int condition2 = 99; 
   int condition12 = condition1 && condition2;
   condition12 = 0;

   while (!condition12)
   {
	   printf("請輸入一個奇數, 且此數不能小於4及超過9\n");
	   scanf("%d", &Max);
	   condition1 = Max % 2 == 1;
	   condition2 = (Max > 4) && (Max <= 9);
	   condition12 = condition1 && condition2;
   }
   printf("您輸入的數值為:%d\n\n\n", Max);
   
   int d;
   d = 5;
   int One;
   int Two;
   int OneorTwo;

   One = d == 1;
   Two = d == 2;
   OneorTwo = One || Two;

   while (!OneorTwo)
   {
	   printf("請輸入整數1或2\n");
	   scanf("%d", &d);
	   One = d == 1;
	   Two = d == 2;
	   OneorTwo = One || Two;
   }

   int i = 1;

   while (i <= Max)
   {
	   printf("(%d)", i);
	   i += d; /*i=i+d*/
   }

return 0;
}