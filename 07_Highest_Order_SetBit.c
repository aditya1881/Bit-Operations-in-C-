#include <stdio.h>
#define INTSIZE 32
int main()
{
    int num , order = -1 ,i ;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for(i=0;i<32;i++)
    {
        if((num>>i)&1)
        {
            order = i ;
        }

    }

    if(order != -1)
    {
        printf("Higher order set in number %d is order %d",num,order);
    }
    else
    {
        printf("0 has no set bits");
    }
    
    
    return 0;
        
}