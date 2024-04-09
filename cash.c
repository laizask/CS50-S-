#include <math.h>
#include <stdio.h>

int main(void)
{
    float troco;
    int moedas = 0;

    do
    {
        printf("Troca devida: ");
        scanf("%f", &troco);
    }
    while (troco < 0);

    int centavos = round(troco * 100);

    while (centavos >= 25)
    {
        centavos -= 25;
        moedas++;
    }
    while (centavos >= 10)
    {
        centavos -= 10;
        moedas++;
    }
    while (centavos >= 5)
    {
        centavos -= 5;
        moedas++;
    }
    while (centavos >= 1)
    {
        centavos -= 1;
        moedas++;
    }
    printf("%d\n", moedas);

    return 0;
}
