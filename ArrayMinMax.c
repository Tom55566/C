#include <stdio.h>

int main () {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int min = arr[0];
	int max = arr[0];
	
    for (int i = 0; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    int first = arr [9];
	printf("此陣列最大值為%d\n", max);
	printf("此陣列最小值為%d\n", min);
	printf("此陣列位置10的值為%d\n", first);	
	
	return 0;
}
