#include <stdio.h>

int main() {
	int n = 0;
	int factor = 0;
	printf("請輸入整數\n", n);	
	scanf("%d", &n);
	printf("%d的因數有:\n", n);
	
	for (int i = 1 ; i <= n ; i++) {
	    if (n % i == 0){
		    printf("%d,", i);  	
		}	
	}
	
	return 0;
}
