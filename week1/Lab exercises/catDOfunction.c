#include <stdio.h>

void meow(int n);
int Get(void);

int main(void) 
{
    int times = Get();
    meow(times);
}

int Get(void)
{
    int n;
    do 
    {
        scanf("%i", &n);
        
    }
    while (n < 1);
    return n;
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}