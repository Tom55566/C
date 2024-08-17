#include <stdio.h>

int main () {

int year = 0;	
	
printf("請輸入年份來確認是否為閏年\n");

while (1) {
	scanf("%d", &year);
    if (year >= 0) {  
        break; 
    } else {
        printf("格式錯誤，請輸入數字\n");
        while (getchar() != '\n'); // 清空緩衝區
    }
}

if (year % 4 == 0){
    printf("%d年為閏年\n", year);
} else {
    printf("%d年不為閏年\n", year);	
}

return 0;
}
 
