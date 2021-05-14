#include <stdio.h>

int main() {

    double A, B, C;
    double tri, cir, tra, qua, ret, PI = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);

    tri = (A * C) / 2;
    cir = PI * (C * C);
    tra = (C * (A + B)) / 2;
    qua = B * B;
    ret = A * B;

    printf("TRIANGULO: %0.3lf\n", tri);
    printf("CIRCULO: %0.3lf\n", cir);
    printf("TRAPEZIO: %0.3lf\n", tra);
    printf("QUADRADO: %0.3lf\n", qua);
    printf("RETANGULO: %0.3lf\n", ret);

    return 0;
}
