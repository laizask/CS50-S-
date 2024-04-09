#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        printf("Qual a altura da pirâmide? ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
