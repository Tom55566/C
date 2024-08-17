#include <stdio.h>

int main () {
int a;
printf("請輸入數字來顯示對應的月份季節(1-12)\n");
scanf("%d", &a);


switch (a) {
 case 1:
 case 2:
 case 3:
    printf("您輸入的月份為:%d月, 為春季\n", a);
    break;
 case 4:
 case 5:
 case 6:
    printf("您輸入的月份為:%d月, 為夏季\n", a);
    break;
 case 7:      	
 case 8:
 case 9:
    printf("您輸入的月份為:%d月, 為秋季\n", a);
    break;	 
 case 10:
 case 11:  	
 case 12:
    printf("您輸入的月份為:%d月, 為冬季\n", a);
    break;
 default:
 	printf("格式錯誤，請輸入數字1-12\n");	
}

return 0;
}

