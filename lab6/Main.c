#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");

	double x, F;

	/* --- Контрольные примеры ---
	   x = 7 -> F = -3*7 + 9 = -12
	   x = 8 -> F = 1/(8 - 7) = 1
	   x = 9 -> F = 1/(9 - 7) = 0.5
	*/

	printf("Введите x: ");
	scanf("%lf", &x);

	if (x <= 7) {
		F = -3 * x + 9;
	}
	else {
		F = 1.0 / (x - 7);
	}

	printf("При x = %lf: F(x) = %lf %s\n",
		x, F,
		(x <= 7) ? "x <= 7" : "x > 7");

	return 0;
}
