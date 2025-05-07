#include <stdio.h>

void Get(int n);

int main(void)
{
    const int n = 3;
    Get(n);
    return 0;
}

void Get(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}