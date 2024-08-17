#include <stdio.h>
#include <math.h>  //數學函式庫 

//題目: 
//一元二次方程式ax^2+bx+c=0。輸入a, b, c三值，並計算方程式的根。
//x=-b±√(b^2-4ac)/2a
//b^2-4ac>0，有兩個不相等的實根。
//b^2-4ac=0，有兩個相等的實根。
//b^2-4ac<0，則印出”沒有實根”。

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    // 輸入方程的係數 a, b, c
    printf("請輸入方程的係數 a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // 計算判別式
    discriminant = b * b - 4 * a * c;  // b^2-4ac>0

    // 根據判別式的值計算並輸出根
    if (discriminant > 0) {
        // 兩個不同的實根
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("有兩個不相等的實根: %.2lf 和 %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        // 兩個相等的實根
        root1 = -b / (2 * a);
        printf("有兩個相等的實根: %.2lf\n", root1);
    } else {
        // 沒有實根
        printf("沒有實根\n");
    }

    return 0;
}
