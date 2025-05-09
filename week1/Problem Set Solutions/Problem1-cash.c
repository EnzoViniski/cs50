#include <cs50.h>
#include <stdio.h>

void change_cash(int money);

int main(void)
{
    int change;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 1);
    change_cash(change);
}

void change_cash(int money)
{
    int coins = 0;

    while (money > 0)
    {
        if (money >= 25)
        {
            money = money - 25;
            coins++;
        }
        if (money >= 10 && money < 25)
        {
            money = money - 10;
            coins++;
        }
        if (money >= 5 && money < 10)
        {
            money = money - 5;
            coins++;
        }
        if (money >= 1 && money < 5)
        {
            money = money - 1;
            coins++;
        }
    }
    printf("%i\n", coins);
}
