#include <stdio.h>

int main()
{
    int num, n, newNumber;
    printf("Input number:");
    scanf("%d", &num);
    printf("Input nth bit to toggle: ");
    scanf("%d", &n);


    newNumber = (1 << n) ^num ;

    printf("Number after Toggling bit is %d ",newNumber);
    
    
    return 0;
        
}