#include <stdio.h> 
//�Q��for�j��p��1^2-2^2+3^2-4^2+�K+49^2-50^2���ȡC


int main() {
    int a, b, c, d = 0; // �N�ܼ� d ��l�Ƭ� 0

    for (int i = 2; i <= 50; i += 2) { // �ק�j�����
        a = (i - 1) * (i - 1);
        b = i * i;
        c = a - b;
        d += c; // �N c �[�� d ��
    }

    printf("for�j��p��1^2-2^2+3^2-4^2+�K+49^2-50^2���Ȭ� %d\n", d);

    return 0;
}
