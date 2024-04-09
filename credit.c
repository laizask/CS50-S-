#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long card_number;
    do
    {
        card_number = get_long("Número do cartão: ");
    }
    while (card_number <= 0);

    int sum = 0;
    int digit_count = 0;
    long long n = card_number;
    while (n > 0)
    {
        int digit = n % 10;

        if (digit_count % 2 == 0)
        {
            sum += digit;
        }
        else
        {
            int doubled_digit = digit * 2;
            sum += doubled_digit / 10 + doubled_digit % 10;
        }

        n /= 10;
        digit_count++;
    }

    if (sum % 10 == 0)
    {
        // Verifique o tipo de cartão de crédito com base no primeiro dígito
        int first_digit = card_number;
        while (first_digit >= 10)
        {
            first_digit /= 10;
        }

        int second_digit = card_number / 10;
        while (second_digit >= 10)
        {
            second_digit /= 10;
        }

        int card_length = digit_count;

        if ((first_digit == 3 && (second_digit == 4 || second_digit == 7)) && card_length == 15)
        {
            printf("AMEX\n");
        }
        else if (first_digit == 5 && second_digit >= 1 && second_digit <= 5 && card_length == 16)
        {
            printf("MASTERCARD\n");
        }
        else if (first_digit == 4 && (card_length == 13 || card_length == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
