#include <cs50.h>
#include <stdio.h>

void check_card(long card_number);

int main(void)
{
    long number;
    do
    {
        number = get_long("Number: ");
    }
    while (number < 1 || number > 9999999999999999);

    check_card(number);
}

void check_card(long card_number)
{
    int digit = 0;
    int sum = 0;
    int position = 0;
    long temp = card_number;
    int first_digit = 0;
    int first_two_digits = 0;

    while (temp > 0)
    {
        digit = temp % 10;
        temp /= 10;
        position++;

        if (position % 2 == 0)
        {
            int doubled = digit * 2;
            sum += (doubled / 10) + (doubled % 10);
        }
        else
        {
            sum += digit;
        }

        if (temp > 0 && temp < 10)
        {
            first_digit = temp;
        }
        if (temp > 9 && temp < 100)
        {
            first_two_digits = temp;
        }
    }

    if (sum % 10 != 0)
    {
        printf("INVALID\n");
        return;
    }

    if (position == 15 && (first_two_digits == 34 || first_two_digits == 37))
    {
        printf("AMEX\n");
        return;
    }

    if (position == 16 && (first_two_digits >= 51 && first_two_digits <= 55))
    {
        printf("MASTERCARD\n");
        return;
    }

    if ((position == 13 || position == 16) && first_digit == 4)
    {
        printf("VISA\n");
        return;
    }

    printf("INVALID\n");
}
