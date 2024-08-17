#include <stdio.h>

int main () {

int n = 0;
int case1 = 0;
int case2 = 0;
int case3 = 0;

printf("輸入7-11工讀生的工作時數，並計算其薪資\n");


while (1) {
    if (scanf("%d", &n) != 1 || n < 0) { // 檢查是否為有效的正整數, 返回值1為讀取到1個有效整數  
        printf("輸入格式錯誤，請重新輸入\n");
        while (getchar() != '\n'); // 清空緩衝區
    } else {
        break; // 若輸入格式正確，跳出迴圈
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
printf("其工讀生的工作時數為%d小時，薪資合計為:%d\n", n, salary);



return 0;
} 
