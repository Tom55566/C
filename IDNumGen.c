#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main () {
	//�ŧi�}�C 
	char arrCityInput[10]; //�C�Ӥ���3�Ӧr���j�p+/0=10	
	char arrCity[][10] = {"�O�_��", "�x����", "�򶩥�", "�O�n��", "������", "�s�_��", "�y����", "��饫", "�Ÿq��", "�s�˿�", "�]�߿�", "�n�뿤", "���ƿ�", "�s�˥�", "���L��", "�Ÿq��", "�̪F��", "�Ὤ��", "�O�F��", "������", "���", "�s����"};
    char arrCityLetter[] = "ABCDEFGHIJKMNOPQTUVWXZ";
	int arrLetterIndex[] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 21, 22, 35, 23, 24, 27, 28, 29, 32, 30, 33};
	int arrRandom[7];
	char nationalID[10];
	
	//�ŧi�ܼ� 
	int genderInput = 0;	
	char cityLetter;
	int cityLetterVal = 0;
	int randomVal = 0;
	int flag = 0; 
	
	printf("�w��ϥΨ����Ҧr�����;��I�п�J�a�ϩM�ʧO�ӥͦ��s�������Ҧr���C\n\n");
	
	//��J���y�A���ͤ��y�X 
	printf("�п�J���y����\n");
	scanf("%s", arrCityInput);
	for (int i = 0 ; i < 22 ; i++) {
		if (strcmp (arrCityInput, arrCity[i]) == 0){ //���r�� 
		    cityLetter = arrCityLetter[i];     //��o���y�����^��  ex:��J�O�_��,  CityLetter = A
		    cityLetterVal = arrLetterIndex[i]; //���򲣥��ˬd�X����  ex:��J�O�_��,  CityLetterVal = 10
            flag = 1;
		} 
	}
	if (flag == 1) {
//		printf("�榡���T\n");
	} else {
		printf("�榡���~�A�п�J���y����(ex:�O�_��)\n");
	} 
		
	//��J�ʧO�Ʀr�A���ͩʧO�X
	printf("�п�J�ʧO(�k�m�п�J1;�k�ʽп�J2)\n");
	scanf("%d", &genderInput);
	if (genderInput == 1 || genderInput == 2){
//		printf("�榡���T\n");
	} else {
		printf("�榡���~(�k�m�п�J1;�k�ʽп�J2)\n");
	}
	
	//����7�ӶüƽX���}�C 
	srand(time(0));
	for (int i = 0 ; i < 7 ; i++) {
		 arrRandom[i] = rand() % 10;
	}
	
	//���ͦw���X
	for (int i = 0 ; i < 7 ; i++) {
	    randomVal += arrRandom[i]*(7-i);   
	}
    int checkCode = 10 - (((cityLetterVal / 10) + (cityLetterVal % 10) * 9 + genderInput * 8 + randomVal) % 10);
 
    //�L�X�����Ҧr�� 
    printf("���ͥX�������Ҧr����:%c%d", cityLetter, genderInput);
    for (int i = 0 ; i < 7 ; i++) {
	    printf("%d", arrRandom[i]);   
	}
	printf("%d", checkCode);
    		
	return 0;
}

