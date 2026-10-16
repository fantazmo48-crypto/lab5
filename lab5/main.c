#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846
#define k -4

int main()
{
    setlocale(LC_ALL, ".UTF-8");
	RadAngle();
	SolFunction();
	HomeWorkVar2();
	return 0;
}

    int RadAngle()
    {

        double gr;
        printf("=Задание 1=\n\n");
        printf("Введите угол в градусах: ");
        if (scanf_s("%lf", &gr) != 1) {
            return 1;
        }

        double radians = gr * M_PI / 180.0;
        printf("sin(%.2f°) = %.6f\n\n\n", gr, sin(radians));

        return 0;
    }

int SolFunction()
{
	float a, b, y;
    float x = 1.3;
    printf("=Задание 2=\n\n");
    printf("Дано:\nk = %d\nx = %.1f\n", k, x);
    a = log(abs(-k * x));
    b = exp(2 * x) + a * x;
    y = x * pow(a, 3) + pow(b, 2);
    printf("Решение функции:\n");
    printf("a = %.6f\n", a);
    printf("b = %.6f\n", b);
    printf("y = %.6f\n\n\n", y);

    printf("=Задание 3=\n\n", y);

    int varA = (fmod(a, 2) == 0) != (fmod(b, 2) == 0);

    printf("а) Только одно из чисел A и B четное:\n");
    printf("условие выполнено (1 - да, 0 - нет): %d\n\n", varA);

    int varB = (fmod(a, 3) == 0) && (fmod(b, 3) == 0) && (fmod(y, 3) == 0);

    printf("б) Каждое из чисел A, B, C кратно трем:\n");
    printf("условие выполнено (1 - да, 0 - нет): %d\n\n\n", varB);


    return 0;
}

int HomeWorkVar2() {

    double x = -4.5;
    double y = 0.75e-4;  // 0.000075
    double z = 0.845e2;  // 84.5

    // cbrt() — кубический корень, fabs() — модуль, pow() — возведение в степень
    double numerator = cbrt(8.0 + pow(fabs(x - y), 2) + 1.0);

    double denominator = (x * x) + (y * y) + 2.0;

    double part1 = numerator / denominator;

    // tan(z) — это тангенс в языке C
    double tan_z = tan(z);
    double part2_stap = pow(tan_z, 2) + 1.0;
    double part2 = exp(fabs(x - y)) * pow(part2_stap, x);

    double u = part2 - part1;
	printf("=Домашнее задание=\n\n");
    printf("x = %.2f\n", x);
    printf("y = %e\n", y);
    printf("z = %.3f\n\n", z);

    printf("Результат вычисления u = %.4f\n", u);

    return 0;
}