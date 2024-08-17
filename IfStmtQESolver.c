#include <stdio.h>
#include <math.h>  //�ƾǨ禡�w 

//�D��: 
//�@���G����{��ax^2+bx+c=0�C��Ja, b, c�T�ȡA�íp���{�����ڡC
//x=-b�ӡ�(b^2-4ac)/2a
//b^2-4ac>0�A����Ӥ��۵�����ڡC
//b^2-4ac=0�A����Ӭ۵�����ڡC
//b^2-4ac<0�A�h�L�X���S����ڡ��C

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    // ��J��{���Y�� a, b, c
    printf("�п�J��{���Y�� a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // �p��P�O��
    discriminant = b * b - 4 * a * c;  // b^2-4ac>0

    // �ھڧP�O�����ȭp��ÿ�X��
    if (discriminant > 0) {
        // ��Ӥ��P�����
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("����Ӥ��۵������: %.2lf �M %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        // ��Ӭ۵������
        root1 = -b / (2 * a);
        printf("����Ӭ۵������: %.2lf\n", root1);
    } else {
        // �S�����
        printf("�S�����\n");
    }

    return 0;
}
