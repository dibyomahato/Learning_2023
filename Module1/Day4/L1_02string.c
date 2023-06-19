#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int convertedValue = atoi(str);

    printf("Converted value: %d\n", convertedValue);

    return 0;
}