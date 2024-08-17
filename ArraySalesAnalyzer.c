#include <stdio.h>

int main() {
	int prices [5] = {12, 16, 10, 14, 15};
    int sales[3][5] = {
        {33, 32, 56, 45, 33},
        {77, 33, 68, 45, 23},
        {43, 55, 43, 67, 65},
    };
    const char sales_name[3][5] = {"Jean", "Tom", "Tina"}; //�t���ær��'\0'�]��column��4+1=5 
    
    // �p��C�@�ӾP������P���`���B
    int total_sales[3] = {0};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            total_sales[i] += sales[i][j] * prices[j];
        }
    }
    
    // ��X�C�@�ӾP������P���`���B
    printf("�C�@�ӾP������P���`���B�G\n");
    for (int i = 0; i < 3; ++i) {
        printf("�P��� %s ���P���`���B���G%d\n", sales_name[i], total_sales[i]);
        
    }
    
    int maxs = 0;
    
    // �p��ο�X�̦n�~�Z���P���
    for (int i = 0; i < 3; ++i) {
        if (maxs < total_sales[i])
            maxs = total_sales[i];
    }
		 
    for (int i = 0; i < 3; i++) {
        if (maxs == total_sales[i]){
        	const char *best_sales_name = sales_name[i];
            printf("�~�Z�̦n�P�����: %s\n", best_sales_name);
		}
    }    


    // �p��C�@�Ӳ��~���P���`���B 
    int total_product[5] = {0};

    for (int j = 0; j < 5; ++j) {
        for (int i = 0; i < 3; ++i) {
            total_product[j] += sales[i][j] * prices[j];
        }
    }    
    
    // ��X�C�@�Ӳ��~���P���`���B
    const char product_name[] = "ABCDE";  

    for (int i = 0; i < 5; ++i) {
        printf("���~ %c ���P���`���B���G%d\n", product_name[i], total_product[i]);
        
    }    
    
    
    int maxp = 0;    
    
    // �p��ο�X�P����B�̦h�����~ 
    for (int i = 0; i < 5; ++i) {
        if (maxp < total_product[i])
            maxp = total_product[i];
    }
		 
    for (int i = 0; i < 5; i++) {
        if (maxp == total_product[i]){
        	const char *best_product_name = product_name[i];
            printf("�~�Z�̦n�P�����: %c\n", best_product_name);
		}
    }       
    
    return 0;
}
