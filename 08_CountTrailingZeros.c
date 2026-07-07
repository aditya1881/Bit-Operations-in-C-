// count trailing zeros in a binary number

#include <stdio.h>
#define INTSIZE 32 
int main()
{
    int num,i, n, counter=0;
    printf("Input number:");
    scanf("%d", &num);
    


    for ( i = 0; i < INTSIZE; i++)
    {
        if((num>>i)&1)
        {
            break;
        }
        else
        {
            counter++;
        }
    }
    

    printf("There are  %d trailing zeros in %d ",counter,num);
    
    
    return 0;
        
}