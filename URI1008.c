#include <stdio.h>

int main() {

    int num, horatr;
    double salhora, sal;

    scanf("%i", &num);
    scanf("%i", &horatr);
    scanf("%lf", &salhora);

    sal = horatr * salhora;

    printf("NUMBER = %i\n", num);
    printf("SALARY = U$ %0.2lf\n", sal);

    return 0;
}
