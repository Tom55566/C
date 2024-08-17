#include <stdio.h>
#include <string.h>


//寫一函數boolean isID (String id)用來判斷id是否為正確身份証字號。
//提示：檢查是否有十個字元
//　　　檢查第一個字元是否為英文字母
//　　　檢查第二個字元是否為1或2數字
//　　　檢查第三個至第十個字元是否為數字
//　　　檢查最後一個檢查碼是否正確（檢查碼的規則請查網路）



int main () {
	char arrInput[10];	
	char arrLetter[] = "ABCDEFGHIJKMNOPQTUVWXZ";
	int arrLetterIndex[] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 21, 22, 35, 23, 24, 27, 28, 29, 32, 30, 33};
	int charToInt = 0;
	int indexVal = 0;
    int checkCode = 0;
	
	while (1) {
		printf("請輸入有效的身分證字號\n");
		scanf("%s", arrInput);
		if (strlen(arrInput) != 10) {
		    printf("輸入字元請勿超過十位\n");	
        } else if (!('A' <= arrInput[0] && arrInput[0] <= 'Z')) {
            printf("第一個字元並非大寫字母\n");	
		} else if (!(arrInput[1] == '1' || arrInput[1] == '2')) {
            printf("第二個字元需為性別碼(1或是2)\n");
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
	        	printf("檢查碼錯誤\n");
			} else 
			     printf("輸入格式正確, 檢查碼為:%d", checkCode);
				 break;
	            
    }    
return 0;
}
         
          
          
          



