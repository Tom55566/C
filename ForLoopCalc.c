#include <stdio.h> 
//利用for迴圈計算1^2-2^2+3^2-4^2+…+49^2-50^2的值。


int main() {
    int a, b, c, d = 0; // 將變數 d 初始化為 0

    for (int i = 2; i <= 50; i += 2) { // 修改迴圈條件
        a = (i - 1) * (i - 1);
        b = i * i;
        c = a - b;
        d += c; // 將 c 加到 d 中
    }

    printf("for迴圈計算1^2-2^2+3^2-4^2+…+49^2-50^2的值為 %d\n", d);

    return 0;
}
