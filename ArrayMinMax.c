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
	printf("���}�C�̤j�Ȭ�%d\n", max);
	printf("���}�C�̤p�Ȭ�%d\n", min);
	printf("���}�C��m10���Ȭ�%d\n", first);	
	
	return 0;
}
