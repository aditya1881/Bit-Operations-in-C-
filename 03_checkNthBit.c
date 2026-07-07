#include<stdio.h>

int main() {
    int num;
    int n;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the bit position to check is Set or Not: ");
    scanf("%d", &n);


   int bitStatus =( num >> n) & 1; // Shift the number right by n and check the LSB


    if (bitStatus) {
        printf("Bit at position %d of %d is 1.\n", n, num);
    } else {
        printf("Bit at position %d of %d is 0.\n", n, num);
    }

    return 0;
}