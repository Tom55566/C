#include <stdio.h>

//�@�ӼƦr�Y�����Ҧ��]�ƪ��`�M�A�h���Ƭ�perfect number�C
//��X100�H���Ҧ��������ơC
//�����G6���]�Ƭ�1, 2, 3�A6=1+2+3�A�G6�������ơC



int main() {
	int n = 0;
	printf("100�����Ҧ������Ʀ�:\n");
	
	for (int i = 1 ; i <= 100 ; i++) {
		int factor = 0;
		for (int i2 = 1 ; i2 < i ; i2++){
			if (i % i2 == 0){
			    factor += i2; 			 	
		    }
		} 	
		if (i == factor){
			printf("%d,", i);
		}
	}	
	return 0;
}
