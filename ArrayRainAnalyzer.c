#include <stdio.h>
#include <stdlib.h> //rand(), srand()
#include <time.h> //time()

// 函數原型
float calculate_average(float data[5][12][4], char *command, int num);

int main() {
    // 初始化隨機種子
    srand(time(NULL)); 

    // 初始化降雨量資料
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

    printf("請輸入指令和相應的數字（如果需要），以空格分隔：\n");
    scanf("%s", command);

    // 如果指令為 "year", "season" 或 "month"，則讀取相應的數字
    if (strcmp(command, "year") == 0 || strcmp(command, "season") == 0 || strcmp(command, "month") == 0) {
        scanf("%d", &num);
    }

    // 計算平均降雨量並輸出結果
    float average = calculate_average(rain_data, command, num);
    if (average == -1) {
        printf("計算失敗。\n");
    } else {
        printf("平均降雨量為: %.2f\n", average);
    }

    return 0;
}

// 計算平均降雨量的函數
float calculate_average(float data[5][12][4], char *command, int num) {
    float sum = 0;
    int count = 0;

    if (strcmp(command, "all") == 0) {
        // 計算60個月的總平均降雨量
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 12; j++) {
                for (int k = 0; k < 4; k++) {
                    sum += data[i][j][k];
                    count++;
                }
            }
        }
    } else if (strcmp(command, "year") == 0) {
        // 計算某一年的平均降雨量
        if (num >= 1 && num <= 5) {
            for (int j = 0; j < 12; j++) {
                for (int k = 0; k < 4; k++) {
                    sum += data[num - 1][j][k];
                    count++;
                }
            }
        } else {
            printf("錯誤：年份應為1至5之間的整數。\n");
            return -1; // 返回錯誤碼
        }
    } else if (strcmp(command, "season") == 0) {
        // 計算某一季的平均降雨量
        if (num >= 1 && num <= 4) {
            for (int j = (num - 1) * 3; j < num * 3; j++) {
                for (int k = 0; k < 4; k++) {
                    sum += data[num - 1][j][k];
                    count++;
                }
            }
        } else {
            printf("錯誤：季節應為1至4之間的整數。\n");
            return -1; // 返回錯誤碼
        }
    } else if (strcmp(command, "month") == 0) {
        // 計算某一月的平均降雨量
        if (num >= 1 && num <= 12) {
            for (int i = 0; i < 5; i++) {
                for (int k = 0; k < 4; k++) {
                    sum += data[i][num - 1][k];
                    count++;
                }
            }
        } else {
            printf("錯誤：月份應為1至12之間的整數。\n");
            return -1; // 返回錯誤碼
        }
    } else {
        printf("錯誤：無效的指令。\n");
        return -1; // 返回錯誤碼
    }

    return sum / count;
}

