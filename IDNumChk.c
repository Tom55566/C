#include <stdio.h>
#include <string.h>


//�g�@���boolean isID (String id)�ΨӧP�_id�O�_�����T�������r���C
//���ܡG�ˬd�O�_���Q�Ӧr��
//�@�@�@�ˬd�Ĥ@�Ӧr���O�_���^��r��
//�@�@�@�ˬd�ĤG�Ӧr���O�_��1��2�Ʀr
//�@�@�@�ˬd�ĤT�ӦܲĤQ�Ӧr���O�_���Ʀr
//�@�@�@�ˬd�̫�@���ˬd�X�O�_���T�]�ˬd�X���W�h�Ьd�����^



int main () {
	char arrInput[10];	
	char arrLetter[] = "ABCDEFGHIJKMNOPQTUVWXZ";
	int arrLetterIndex[] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 21, 22, 35, 23, 24, 27, 28, 29, 32, 30, 33};
	int charToInt = 0;
	int indexVal = 0;
    int checkCode = 0;
	
	while (1) {
		printf("�п�J���Ī������Ҧr��\n");
		scanf("%s", arrInput);
		if (strlen(arrInput) != 10) {
		    printf("��J�r���ФŶW�L�Q��\n");	
        } else if (!('A' <= arrInput[0] && arrInput[0] <= 'Z')) {
            printf("�Ĥ@�Ӧr���ëD�j�g�r��\n");	
		} else if (!(arrInput[1] == '1' || arrInput[1] == '2')) {
            printf("�ĤG�Ӧr���ݬ��ʧO�X(1�άO2)\n");
		} else 
		    for (int i = 1 ; i < 9 ; i++) {
	            charToInt += (arrInput[i] - '0')*(9-i);   
	        }
		    for (int i = 0 ; i < 22 ; i++) {
    	        if (arrInput[0] == arrLetter[i]){
    		        indexVal = arrLetterIndex[i];
		        }   
	        }
	        int checkCode = 10 - (((indexVal / 10) + (indexVal % 10) * 9 + charToInt) % 10);
	        if (checkCode != (arrInput[9] - '0')){
	        	printf("�ˬd�X���~\n");
			} else 
			     printf("��J�榡���T, �ˬd�X��:%d", checkCode);
				 break;
	            
    }    
return 0;
}
         
          
          
          



