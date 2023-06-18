#include <stdio.h>

int bit_operations(int num, int oprType) {
    int result = num;

    switch (oprType) {
        case 1:
            result = num | (1 << 0); 
            break;
        case 2:
            result = num & ~(1 << 31); 
            break;
        case 3:
            result = num ^ (1 << 15); 
            break;
        default:
            printf("Error: Invalid operation type\n");
            break;
    }

    return result;
}

int main() {
    int num, oprType;

    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);

    printf("Enter operation type (1, 2, or 3): ");
    scanf("%d", &oprType);

    int result = bit_operations(num, oprType);

    printf("Result: %d\n", result);

    return 0;
}