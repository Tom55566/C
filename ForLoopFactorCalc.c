#include <stdio.h>

int main() {
	int n = 0;
	int factor = 0;
	printf("�п�J���\n", n);	
	scanf("%d", &n);
	printf("%d���]�Ʀ�:\n", n);
	
	for (int i = 1 ; i <= n ; i++) {
	    if (n % i == 0){
		    printf("%d,", i);  	
		}	
	}
	
	return 0;
}
