#include <stdio.h>

int main() {

    int cod1, qtd1, cod2, qtd2;
    double prc1, prc2, tot;

    scanf("%i %i %lf", &cod1, &qtd1, &prc1);
    scanf("%i %i %lf", &cod2, &qtd2, &prc2);

    tot = (qtd1 * prc1) + (qtd2 * prc2);

    printf("VALOR A PAGAR: R$ %0.2lf\n", tot);


    return 0;
}
