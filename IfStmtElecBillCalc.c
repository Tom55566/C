#include <stdio.h>

int main () {

int n = 0;
int kWh = 0;
int case1 = 0;
int case2 = 0;
int case3 = 0;
int case4 = 0;
int case5 = 0;
int case6 = 0;

printf("�аݱz��\"��~�ιq\"�٬O\"�D��~�ιq\"? (��~�ιq�п�J1�A�D��~�ιq�п�J2)\n");

while (1) {
	scanf("%d", &n);
    if (n == 1 || n == 2) { // �ˬd�O�_�����Ī������, ��^��1��Ū����1�Ӧ��ľ��  
        break; // �Y��J�榡���T�A���X�j��
    } else {
        printf("�п�J1��2\n");
        while (getchar() != '\n'); // �M�Žw�İ�
    }
}


printf("�аݱz���`�׼ƦX�p��?\n");

while (1) {
	scanf("%d", &kWh);
    if (kWh >= 0) { // �ˬd�O�_�����Ī������, ��^��1��Ū����1�Ӧ��ľ��  
        break; // �Y��J�榡���T�A���X�j��
    } else {
        printf("�榡���~�A�п�J�Ʀr\n");
        while (getchar() != '\n'); // �M�Žw�İ�
    }
}


if (n == 1) {	
	if (kWh <= 330) {
	    case1 = kWh * 2.12;
    }   
    
    if (kWh > 331 && kWh <= 700) {
        case1 = 330 * 2.12;
	    case2 = (kWh - 330) * 2.91;
    } 	
		
    if (kWh > 700 && kWh <= 1500) {
        case1 = 330 * 2.12;
        case2 = 370 * 2.91;
	    case3 = (kWh - 700) * 3.44;
    } 
			
    if (kWh > 1500) {
        case1 = 330 * 2.12;
        case2 = 370 * 2.91;
        case3 = 800 * 3.94;
	    case4 = (kWh - 1500) * 5.05;
    } 
}
   
if (n == 2) {	
	if (kWh <= 120) {
	    case1 = kWh * 1.63;
    }   
    
    if (kWh > 121 && kWh <= 330) {
        case1 = 120 * 1.63;
	    case2 = (kWh - 120) * 2.10;
    } 	
		
    if (kWh > 331 && kWh <= 500) {
        case1 = 120 * 1.63;
        case2 = 210 * 2.10;
	    case3 = (kWh - 330) * 1.25;
    } 
			
    if (kWh > 501 && kWh <= 700) {
        case1 = 120 * 1.63;
        case2 = 210 * 2.10;
	    case3 = 170 * 2.89;
	    case4 = (kWh - 500) * 3.94;
    } 
    		
    if (kWh > 701 && kWh <= 1000) {
        case1 = 120 * 1.63;
        case2 = 210 * 2.10;
	    case3 = 170 * 2.89;
	    case4 = 200 * 3.94;	    
	    case5 = (kWh - 700) * 4.60;
    } 
    		
    if (kWh > 1000) {
        case1 = 120 * 1.63;
        case2 = 210 * 2.10;
	    case3 = 170 * 2.89;
	    case4 = 200 * 3.94;	 
	    case5 = 300 * 4.60;		   
	    case6 = (kWh - 1000) * 5.03;
    } 
}

int salary = case1 + case2 + case3 + case4 + case5 + case6;
printf("�z���q�O�X�p��:%d\n", salary);

return 0;
} 



