#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    double a, b;
    double area;
    double perimeter;

    printf("Введите длину стороны A: ");
    if (scanf("%lf", &a) != 1) {
        printf("Ошибка ввода для стороны A.\n");
        return 1;
    }

    printf("Введите длину стороны B: ");
    if (scanf("%lf", &b) != 1) {
        printf("Ошибка ввода для стороны B.\n");
        return 1;
    }

    // Проверка на корректность значений (стороны должны быть положительными)
    if (a <= 0 || b <= 0) {
        printf("Ошибка: длины сторон должны быть положительными числами.\n");
        return 1;
    }

    area = a * b;
    perimeter = 2 * (a + b);

    printf("Площадь прямоугольника: %.2f\n", area);
    printf("Периметр прямоугольника: %.2f\n", perimeter);

    return 0;
}
