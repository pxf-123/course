#include <stdio.h>

int main() {
    int year = 0, month = 0, date = 0;
    scanf("%4d%2d%2d", &year, &month, &date);
    if (1990 <= year && year <= 2015 && 1 <= month && month <= 12 && 1 <= date && date <= 30)
    {
        printf("year=%d\n", year);
        printf("month=%02d\n", month);
        printf("date=%02d", date);
    }
    return 0;
}