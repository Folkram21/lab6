#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    int year;
    int remainder;

    printf("¬ведите год: ");

    scanf("%d", &year);

    remainder = year % 4;

    if (remainder == 0) {
        printf("год %d високосный\n", year);
    }
    else {
        printf("год %d не високосный\n", year);
    }

    return 0;
}
