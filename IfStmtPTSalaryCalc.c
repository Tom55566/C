#include <stdio.h>

int main () {

int n = 0;
int case1 = 0;
int case2 = 0;
int case3 = 0;

printf("��J7-11�uŪ�ͪ��u�@�ɼơA�íp����~��\n");


while (1) {
    if (scanf("%d", &n) != 1 || n < 0) { // �ˬd�O�_�����Ī������, ��^��1��Ū����1�Ӧ��ľ��  
        printf("��J�榡���~�A�Э��s��J\n");
        while (getchar() != '\n'); // �M�Žw�İ�
    } else {
        break; // �Y��J�榡���T�A���X�j��
    }
}

    
if (n <= 60) {
	case1 = n * 150;
}
   
if (n > 60 && n <= 80) {
    case1 = 60 * 150;
	case2 = (n - 60) * (150 * 1.25);
} 	
		
if (n > 80) {
    case1 = 60 * 150;
	case2 = 20 * (150 * 1.25);
	case3 = (n - 80) * (150 * 1.5);
} 
	
int salary = case1 + case2 + case3;
printf("��uŪ�ͪ��u�@�ɼƬ�%d�p�ɡA�~��X�p��:%d\n", n, salary);



return 0;
} 
