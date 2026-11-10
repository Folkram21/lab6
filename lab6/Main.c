#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    int year;
    int remainder;

    printf("Введите год: ");

    scanf("%d", &year);

    remainder = year % 4;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("год %d високосный\n", year);
    }
    else {
        printf("год %d не високосный\n", year);
    }

    return 0;
}
