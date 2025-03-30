#include <stdio.h>

int main() {
    char a = '0';
    scanf_s("%c", &a);
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j <5 - i; j++)
            printf(" ");

        for (int j = 0; j < i; j++)
            printf("%c ", a);
        printf("\n");
    }
    return 0;
}