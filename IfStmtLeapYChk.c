#include <stdio.h>

int main () {

int year = 0;	
	
printf("�п�J�~���ӽT�{�O�_���|�~\n");

while (1) {
	scanf("%d", &year);
    if (year >= 0) {  
        break; 
    } else {
        printf("�榡���~�A�п�J�Ʀr\n");
        while (getchar() != '\n'); // �M�Žw�İ�
    }
}

if (year % 4 == 0){
    printf("%d�~���|�~\n", year);
} else {
    printf("%d�~�����|�~\n", year);	
}

return 0;
}
 
