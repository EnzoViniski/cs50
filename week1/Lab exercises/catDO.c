#include <stdio.h>

void meow(int n);

int main(void) 
{
    int n;
    do 
    {
        scanf("%i", &n);
        meow(n);
    }
    while (n < 1);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}