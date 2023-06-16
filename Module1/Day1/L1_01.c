#include <stdio.h>
void findBiggestIfElse(int a, int b, int* ans) {
    if (a > b) {
        *ans = a;
    } else {
        *ans = b;
    }
}

void findBiggestTernary(int a, int b, int* ans) {
    *ans = (a > b) ? a : b;
}

int main() {
    int num1, num2, result_IfElse, result_Ternary;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    findBiggestIfElse(num1, num2, &result_IfElse);
    findBiggestTernary(num1, num2, &result_Ternary);

    printf("Using if-else biggest number is: %d\n", result_IfElse);
    printf("Using ternary operator biggest number is: %d\n", result_Ternary);

    return 0;
}