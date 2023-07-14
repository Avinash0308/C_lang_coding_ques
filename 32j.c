#include <stdio.h>
int main()
{
    int years = 0, a, b;
    do
    {
        
        years += 1;
        a = 1000 * years - 4000;
        b = 720 * years;
    
    } while (b>a);
    
    
    
    printf("%d", years);
    return 0;
}
