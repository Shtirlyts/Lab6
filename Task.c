#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    double x, y, z;
    double w = -INFINITY;
    printf("Введите число: ");
    scanf("%lf", &x);
    printf("Введите число: ");
    scanf("%lf", &y);
    printf("Введите число: ");
    scanf("%lf", &z);

    if (x >= y && x >= z) {
        w = x;
    }
    else if (y >= x && y >= z) {
        w = y;
    }
    else {
        w = z;
    }

    printf("Наибольшее число: %.2lf\n", w);
    return 0;
}
