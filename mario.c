#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        printf("Qual a altura da pirâmide? (escolha entre 1 a 8): ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
