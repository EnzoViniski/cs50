#include <cs50.h>
#include <stdio.h>

void pyramid(int bricks);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    pyramid(height);
}

void pyramid(int bricks)
{
    int times = 1;
    int times2 = 1;
    for (int t = 0; t < bricks; t++)
    {
        for (int s = 1; s < bricks - t; s++)
        {
            printf(" ");
        }
        for (int i = 1; i <= times; i++)
        {
            printf("#");
        }
        printf(" ");
        printf(" ");
        for (int a = 1; a <= times2; a++)
        {
            printf("#");
        }
        printf("\n");
        times += 1;
        times2 += 1;
    }
}