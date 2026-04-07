// 12S25006 - Rafael Dietrich Z Simatupang

#include <stdio.h>
#include <stdlib.h>

int main(int _argv, char **_argc)
{
    char op;
    scanf(" %c", &op);

    int hasil = 0;
    if (op == '*') {
        hasil = 1;
    }

    int angka;
    int iterasi = 0;

    while (iterasi < 4) {
        scanf("%d", &angka);

        if (angka == -1) {
            printf("0\n");
            break;
        }

        if (op == '+') {
            hasil = hasil + angka;
        } else if (op == '-') {
            hasil = abs(hasil - angka);
        } else if (op == '*') {
            hasil = hasil * angka;
        }

        printf("%d\n", hasil);
        iterasi++;
    }

    return 0;
}