// 12S25006 - Rafael Dietrich Z Simatupang

#include <stdio.h>

int main(int _argv, char **_argc)
{
    char op;
    scanf(" %c", &op); 

    int hasil = 0;
    if (op == '*') {
        hasil = 1;
    }

    int num;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &num);
        
        if (num == -1) {
            printf("0\n");
            break;
        }

        if (op == '+') {
            hasil += num;
        } else if (op == '-') {
            hasil -= num;
        } else if (op == '*') {
            hasil *= num;
        }
        
        printf("%d\n", hasil);
    }

    return 0;
}