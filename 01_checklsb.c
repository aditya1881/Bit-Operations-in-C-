#include<stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num & 1) {
        printf("%d LSB is set 1.\n", num);
    } else {
        printf("%d LSB is not set 1.\n", num);
    }

    return 0;
}