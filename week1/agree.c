#include <stdio.h>

int main(void)
{
    char c;

    printf("Do you agree?");
    scanf("%c", &c);
    
    if (c == 'n' || c == 'N')
    {
        printf("Not agreed\n");
    } 
    else if (c == 'y' || c == 'Y')
    {
        printf("Agreed\n");
    }
}