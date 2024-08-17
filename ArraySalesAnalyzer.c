#include <stdio.h>

int main() {
	int prices [5] = {12, 16, 10, 14, 15};
    int sales[3][5] = {
        {33, 32, 56, 45, 33},
        {77, 33, 68, 45, 23},
        {43, 55, 43, 67, 65},
    };
    const char sales_name[3][5] = {"Jean", "Tom", "Tina"}; //含隱藏字元'\0'因此column為4+1=5 
    
    // 計算每一個銷售員的銷售總金額
    int total_sales[3] = {0};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            total_sales[i] += sales[i][j] * prices[j];
        }
    }
    
    // 輸出每一個銷售員的銷售總金額
    printf("每一個銷售員的銷售總金額：\n");
    for (int i = 0; i < 3; ++i) {
        printf("銷售員 %s 的銷售總金額為：%d\n", sales_name[i], total_sales[i]);
        
    }
    
    int maxs = 0;
    
    // 計算及輸出最好業績的銷售員
    for (int i = 0; i < 3; ++i) {
        if (maxs < total_sales[i])
            maxs = total_sales[i];
    }
		 
    for (int i = 0; i < 3; i++) {
        if (maxs == total_sales[i]){
        	const char *best_sales_name = sales_name[i];
            printf("業績最好銷售員為: %s\n", best_sales_name);
		}
    }    


    // 計算每一個產品的銷售總金額 
    int total_product[5] = {0};

    for (int j = 0; j < 5; ++j) {
        for (int i = 0; i < 3; ++i) {
            total_product[j] += sales[i][j] * prices[j];
        }
    }    
    
    // 輸出每一個產品的銷售總金額
    const char product_name[] = "ABCDE";  

    for (int i = 0; i < 5; ++i) {
        printf("產品 %c 的銷售總金額為：%d\n", product_name[i], total_product[i]);
        
    }    
    
    
    int maxp = 0;    
    
    // 計算及輸出銷售金額最多的產品 
    for (int i = 0; i < 5; ++i) {
        if (maxp < total_product[i])
            maxp = total_product[i];
    }
		 
    for (int i = 0; i < 5; i++) {
        if (maxp == total_product[i]){
        	const char *best_product_name = product_name[i];
            printf("業績最好銷售員為: %c\n", best_product_name);
		}
    }       
    
    return 0;
}
