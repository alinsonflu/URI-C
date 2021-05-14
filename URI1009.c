#include <stdio.h>

int main() {

    char nome;
    double salfixo, vendas, saltotal;

    scanf("%s", &nome);
    scanf("%lf", &salfixo);
    scanf("%lf", &vendas);

    saltotal = salfixo + (vendas * 0.15);

    printf("TOTAL = R$ %0.2lf\n", saltotal);

    return 0;
}
