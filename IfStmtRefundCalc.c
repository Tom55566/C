#include <stdio.h>

//選擇性敘述的練習-Refund
//輸入在某商店購物應付金額與實付金額。
//實付金額小於應付金額，則印出”金額不足”。
//實付金額等於應付金額，則印出”不必找錢”。
//實付金額大於應付金額，則輸出找回金額最少的鈔票數和錢幣數。
//假設幣值只有1000, 500, 100元紙鈔和50, 10, 5, 1元硬幣。
//說明：若買了132元的商品，付1000元，應找回一張500元，三張100元，一個50元硬幣，一個10元硬幣，一個5元硬幣和三個1元硬幣。



int main () {
	
	int a = 0;
	int pay = 0;
	int change = 0;
	int c1000 = 0; 	
	int c500 = 0; 
	int c100 = 0; 
	int c50 = 0; 
	int c10 = 0; 
	int c5 = 0; 
	int c1 = 0;
	
	printf("請輸入商品金額\n");	
	scanf ("%d", &a);
	printf("請輸入付款金額\n");	
	scanf ("%d", &pay);	
	 
	
	if (a > pay) {
		printf("金額不足\n"); 
	}
	
	if (a == pay) {
		printf("不必找錢\n"); 
	}	
	
	if (pay - a < 1000) {
		change = pay - a;
		c500 = change / 500;
	    c100 = (change % 500) / 100;
	    c50 = ((change % 500) % 100) / 50;
	    c10 = (((change % 500) % 100) % 50) / 10;
	    c5 = ((((change % 500) % 100) % 50) % 10) / 5;
	    c1 = (((((change % 500) % 100) % 50) % 10 ) % 5 ) / 1;
	    printf("一共找回%d張500元，%d張100元，%d個50元，%d個10元，%d個5元，%d個1元\n", c500, c100, c50, c10, c5 ,c1); 
	}

	
	if (pay - a > 1000) {
		change = pay - a;
		c1000 = change / 1000;
		c500 = (change % 1000) / 500;
	    c100 = ((change % 1000) % 500) / 100;
	    c50 = (((change % 1000) % 500) % 100) / 50;
	    c10 = ((((change % 1000) % 500) % 100) % 50) / 10;
	    c5 = (((((change % 1000) % 500) % 100) % 50) % 10) / 5;
	    c1 = ((((((change % 1000) % 500) % 100) % 50) % 10) % 5) / 1;
	    printf("您多給%d張1000元，找回%d張500元，%d張100元，%d個50元，%d個10元，%d個5元，%d個1元\n", c1000, c500, c100, c50, c10, c5 ,c1); 
	}

//
//	if (pay - a > 1000) {
//		c1000 = 
//		c500 = 
//	    c100 = 
//	    c50 = 
//	    c10 = 
//	    c5 = 
//	    c1 =
//	    printf("%d", a); 
//	}	
//	
	
	
	return 0;
	
}
