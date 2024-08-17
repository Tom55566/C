#include <stdio.h>
#include <stdlib.h> //rand(), srand()
#include <time.h> //time()

// ��ƭ쫬
float calculate_average(float data[5][12][4], char *command, int num);

int main() {
    // ��l���H���ؤl
    srand(time(NULL)); 

    // ��l�ƭ��B�q���
    float rain_data[5][12][4];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 12; j++) {
            for (int k = 0; k < 4; k++) {
                rain_data[i][j][k] = rand() % 1000;
            }
        }
    }

    char command[10];
    int num = 0;

    printf("�п�J���O�M�������Ʀr�]�p�G�ݭn�^�A�H�Ů���j�G\n");
    scanf("%s", command);

    // �p�G���O�� "year", "season" �� "month"�A�hŪ���������Ʀr
    if (strcmp(command, "year") == 0 || strcmp(command, "season") == 0 || strcmp(command, "month") == 0) {
        scanf("%d", &num);
    }

    // �p�⥭�����B�q�ÿ�X���G
    float average = calculate_average(rain_data, command, num);
    if (average == -1) {
        printf("�p�⥢�ѡC\n");
    } else {
        printf("�������B�q��: %.2f\n", average);
    }

    return 0;
}

// �p�⥭�����B�q�����
float calculate_average(float data[5][12][4], char *command, int num) {
    float sum = 0;
    int count = 0;

    if (strcmp(command, "all") == 0) {
        // �p��60�Ӥ몺�`�������B�q
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 12; j++) {
                for (int k = 0; k < 4; k++) {
                    sum += data[i][j][k];
                    count++;
                }
            }
        }
    } else if (strcmp(command, "year") == 0) {
        // �p��Y�@�~���������B�q
        if (num >= 1 && num <= 5) {
            for (int j = 0; j < 12; j++) {
                for (int k = 0; k < 4; k++) {
                    sum += data[num - 1][j][k];
                    count++;
                }
            }
        } else {
            printf("���~�G�~������1��5��������ơC\n");
            return -1; // ��^���~�X
        }
    } else if (strcmp(command, "season") == 0) {
        // �p��Y�@�u���������B�q
        if (num >= 1 && num <= 4) {
            for (int j = (num - 1) * 3; j < num * 3; j++) {
                for (int k = 0; k < 4; k++) {
                    sum += data[num - 1][j][k];
                    count++;
                }
            }
        } else {
            printf("���~�G�u�`����1��4��������ơC\n");
            return -1; // ��^���~�X
        }
    } else if (strcmp(command, "month") == 0) {
        // �p��Y�@�몺�������B�q
        if (num >= 1 && num <= 12) {
            for (int i = 0; i < 5; i++) {
                for (int k = 0; k < 4; k++) {
                    sum += data[i][num - 1][k];
                    count++;
                }
            }
        } else {
            printf("���~�G�������1��12��������ơC\n");
            return -1; // ��^���~�X
        }
    } else {
        printf("���~�G�L�Ī����O�C\n");
        return -1; // ��^���~�X
    }

    return sum / count;
}

