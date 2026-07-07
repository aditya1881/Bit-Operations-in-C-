#include <stdio.h>

int main()
{
    int num, n, newNumber;
    printf("Input number:");
    scanf("%d", &num);
    printf("Input nth bit to clear: ");
    scanf("%d", &n);


    newNumber =    num & ~(1 << n)  ;
    // newNumber =   ~(1 << n) & num ;

    printf("Number after clearing  bit is %d ",newNumber);
    
    
    return 0;
        
}