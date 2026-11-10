#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    double x;

    printf("¬ведите X: ");
    scanf("%lf", &x);

    printf("X^2 = %g\n", x * x);

    if (x < 0) {
        printf("sqrt(X) не определЄн (X < 0)\n");
    }
    else {
        printf("sqrt(X) = %g\n", sqrt(x));
    }

    printf("X = %g\n", x);
}
