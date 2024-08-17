#include <stdio.h>

//计璝单ㄤ┮Τ计羆㎝玥计perfect number
//т100ず┮ΤЧ计
//弧6计1, 2, 36=1+2+3珿6Ч计



int main() {
	int n = 0;
	printf("100ず┮ΤЧ计Τ:\n");
	
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
