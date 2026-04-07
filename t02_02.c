// 12S25006 - Rafael Dietrich Z Simatupang

#include <stdio.h>

int main(int _argv, char **_argc)
{
    int level;
    scanf("%d", &level);

    for (int i = level; i >= 1; i--) {
        switch (i) {
            case 1: printf("staple food\n"); break;
            case 2: printf("side dishes\n"); break;
            case 3: printf("vegetables\n"); break;
            case 4: printf("fruits\n"); break;
            case 5: printf("milk\n"); break;
        }
    }

    switch (level) {
        case 1: printf("you need side dishes\n"); break;
        case 2: printf("you need vegetables\n"); break;
        case 3: printf("good\n"); break;
        case 4: printf("very good\n"); break;
        case 5: printf("perfect\n"); break;
    }

    return 0;
}