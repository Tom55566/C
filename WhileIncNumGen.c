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
	   printf("�п�J�@�ө_��, �B���Ƥ���p��4�ζW�L9\n");
	   scanf("%d", &Max);
	   condition1 = Max % 2 == 1;
	   condition2 = (Max > 4) && (Max <= 9);
	   condition12 = condition1 && condition2;
   }
   printf("�z��J���ƭȬ�:%d\n\n\n", Max);
   
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
	   printf("�п�J���1��2\n");
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