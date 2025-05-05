#include <stdio.h>

int main(void)
{
    int x;
    int y;
    scanf("%i", &x);
    scanf("%i", &y);
    if (x > y)
    {
        printf("x is greater than y\n");
    } else if (x < y)
    {
        printf("x less than y\n");
    } else 
    {
        printf("x equal to y\n");
    } 
    return 0;
}