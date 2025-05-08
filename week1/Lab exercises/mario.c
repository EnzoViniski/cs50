#include <stdio.h>

void print_row(int bricks);

int main(void)
{
    int height;
    do 
    {
        printf("What's the height? ");
        scanf("%i", &height);
        print_row(height);
    }
    while (height < 1);

}

void print_row(int bricks)
{
   for (int i = 0; i < bricks; i++)
   {
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
   }
}