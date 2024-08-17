#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main () {
	//宣告陣列 
	char arrCityInput[10]; //每個中文3個字元大小+/0=10	
	char arrCity[][10] = {"臺北市", "台中市", "基隆市", "臺南市", "高雄市", "新北市", "宜蘭縣", "桃園市", "嘉義市", "新竹縣", "苗栗縣", "南投縣", "彰化縣", "新竹市", "雲林縣", "嘉義縣", "屏東縣", "花蓮縣", "臺東縣", "金門縣", "澎湖縣", "連江縣"};
    char arrCityLetter[] = "ABCDEFGHIJKMNOPQTUVWXZ";
	int arrLetterIndex[] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 21, 22, 35, 23, 24, 27, 28, 29, 32, 30, 33};
	int arrRandom[7];
	char nationalID[10];
	
	//宣告變數 
	int genderInput = 0;	
	char cityLetter;
	int cityLetterVal = 0;
	int randomVal = 0;
	int flag = 0; 
	
	printf("歡迎使用身分證字號產生器！請輸入地區和性別來生成新的身分證字號。\n\n");
	
	//輸入戶籍，產生戶籍碼 
	printf("請輸入戶籍縣市\n");
	scanf("%s", arrCityInput);
	for (int i = 0 ; i < 22 ; i++) {
		if (strcmp (arrCityInput, arrCity[i]) == 0){ //比對字串 
		    cityLetter = arrCityLetter[i];     //獲得戶籍對應英文  ex:輸入臺北市,  CityLetter = A
		    cityLetterVal = arrLetterIndex[i]; //後續產生檢查碼之用  ex:輸入臺北市,  CityLetterVal = 10
            flag = 1;
		} 
	}
	if (flag == 1) {
//		printf("格式正確\n");
	} else {
		printf("格式錯誤，請輸入戶籍縣市(ex:臺北市)\n");
	} 
		
	//輸入性別數字，產生性別碼
	printf("請輸入性別(男姓請輸入1;女性請輸入2)\n");
	scanf("%d", &genderInput);
	if (genderInput == 1 || genderInput == 2){
//		printf("格式正確\n");
	} else {
		printf("格式錯誤(男姓請輸入1;女性請輸入2)\n");
	}
	
	//產生7個亂數碼的陣列 
	srand(time(0));
	for (int i = 0 ; i < 7 ; i++) {
		 arrRandom[i] = rand() % 10;
	}
	
	//產生安全碼
	for (int i = 0 ; i < 7 ; i++) {
	    randomVal += arrRandom[i]*(7-i);   
	}
    int checkCode = 10 - (((cityLetterVal / 10) + (cityLetterVal % 10) * 9 + genderInput * 8 + randomVal) % 10);
 
    //印出身份證字號 
    printf("產生出的身份證字號為:%c%d", cityLetter, genderInput);
    for (int i = 0 ; i < 7 ; i++) {
	    printf("%d", arrRandom[i]);   
	}
	printf("%d", checkCode);
    		
	return 0;
}

