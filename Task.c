#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int Task1() {
    setlocale(LC_CTYPE, "RUS");
	int yeas;
	printf("Введите год: ");
	scanf("%d", &yeas);
    if ((yeas % 4 == 0 && yeas % 100 != 0) || (yeas % 400 == 0)) {
		printf("Год %d високосный", yeas);
	}
	else {
		printf("год %d не високосный", yeas);
	}
}
int Task2() {
    //Контрольный пример:
    // При x <= 3: pow(x, 2) - 3 * x + 9. F(0) = 0 - 0 + 9 = 9
    // При x > 3: 1/(pow(x, 3) + 6). F(4) = 1/(64 + 6) = 1/70
    setlocale(LC_CTYPE, "RUS");
    int x;
    double f;

    printf("Введите значение x: ");
    scanf("%d", &x);

    f = (x <= 3) ? (pow(x, 2) - 3 * x + 9) : (1.0 / (pow(x, 3) + 6));

    printf((x <= 3) ? "%d^2 - 3*%d + 9 = %.1f" : "1/(%d^3 + 6) = %.1f", x, x, f);

    return 0;
}


int Home_T5() {
    setlocale(LC_CTYPE, "RUS");
    double x, y, result;

    printf("Введите x: ");
    scanf("%lf", &x);
    printf("Введите y: ");
    scanf("%lf", &y);

    result = sqrt(pow(2 + y, 2) + pow(sin(y + 5), 1.0 / 7.0)) / (log(x + 1) - pow(y, 3));
    printf("F(%.2f, %.2f) = %.5f\n\n", x, y, result);

    double x_test = 0.71 * pow(10, -4);
    double y_test = 4.0;
    double control_result = sqrt(pow(2 + y_test, 2) + pow(sin(y_test + 5), 1.0 / 7.0)) / (log(x_test + 1) - pow(y_test, 3));
    printf("Контроль №1: \n");
    printf("F(%.7f, %.1f) = %.5f\n", x_test, y_test, control_result);
    printf("Ожидаемый результат: -0.09489\n\n");

    double x_test2 = 2.3 * pow(10, 5);
    double y_test2 = 2.7;
    double control_result2 = sqrt(pow(2 + y_test2, 2) + pow(sin(y_test2 + 5), 1.0 / 7.0)) / (log(x_test2 + 1) - pow(y_test2, 3));
    printf("Контроль №2: \n");
    printf("F(%.7f, %.1f) = %.6f\n", x_test2, y_test2, control_result2);
    printf("Ожидаемый результат: -0.654889\n");
    return 0;
}
int Task_3H() {
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
void main() {
    Task_3H();
}