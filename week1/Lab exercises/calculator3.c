#include <stdio.h>

int main(void)
{
    long dollars = 1;
    
    while (1)
    {
        printf("Here's $%li. Double it or give to the next person? ", dollars);
        
        char c; 
        scanf(" %c", &c);

        if (c == 'y') 
        {
            dollars *= 2;
        } 
        else 
        {
            break;
        }
    }
    
    printf("%li\n", dollars);
    return 0;
}
