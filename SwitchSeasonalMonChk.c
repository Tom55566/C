#include <stdio.h>

int main () {
int a;
printf("�п�J�Ʀr����ܹ���������u�`(1-12)\n");
scanf("%d", &a);


switch (a) {
 case 1:
 case 2:
 case 3:
    printf("�z��J�������:%d��, ���K�u\n", a);
    break;
 case 4:
 case 5:
 case 6:
    printf("�z��J�������:%d��, ���L�u\n", a);
    break;
 case 7:      	
 case 8:
 case 9:
    printf("�z��J�������:%d��, ����u\n", a);
    break;	 
 case 10:
 case 11:  	
 case 12:
    printf("�z��J�������:%d��, ���V�u\n", a);
    break;
 default:
 	printf("�榡���~�A�п�J�Ʀr1-12\n");	
}

return 0;
}

