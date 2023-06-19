#include <stdio.h>

void printExponent(double *num) {
    unsigned long long *ptr = (unsigned long long *)num;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF; 

    printf("Exponent (Hex): 0x%llX\n", exponent);

    printf("Exponent (Binary): 0b");
    for (int i = 11; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 0x1;
        printf("%llu", bit);
    }
    printf("\n");
}

int main() {
    double x;
    printf("Enter a double value: ");
    scanf("%lf", &x);

    printExponent(&x);

    return 0;
}
