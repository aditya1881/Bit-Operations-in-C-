#include<stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);


    int BITS = sizeof(num) * 8; // Calculate the number of bits in an integer
    int MSB = 1 << (BITS-1) ; // Create a mask for the MSB


    if (num & MSB) {
        printf("%d MSB is set 1.\n", num);
    } else {
        printf("%d MSB is not set 1.\n", num);
    }

    return 0;
}