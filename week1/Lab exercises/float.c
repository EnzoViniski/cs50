#include <stdio.h>

float main(void)
{
    float x, y;
    
    printf("x: ");
    scanf("%i", &x);
    
    printf("y: ");
    scanf("%i", &y);

    printf("%.2f\n", x / y);

}