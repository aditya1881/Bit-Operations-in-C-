#include<stdio.h>
#define INTSIZE 32
int main()
{

    int num ,i,msb,counter=0;
    printf("Input number:");
    scanf("%d", &num);

    msb = 1<<(INTSIZE-1);

    for ( i = 0; i < INTSIZE; i++)
    {
        if((num<<i)&msb)
        {
            break;
        }
        else
        {
            counter++;
        }
    }
    
    printf("There are %d of Leading zeros in %d ",counter,num);

    return 0 ;
}