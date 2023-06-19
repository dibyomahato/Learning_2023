#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char* ptr1 = (char*)a;
    char* ptr2 = (char*)b;
    char temp;

    for (size_t i = 0; i < size; i++) {
        temp = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = temp;
    }
}

int main() {
    int int1, int2;
    float float1, float2;
    char char1, char2;

    printf("Enter two integers: ");
    scanf("%d %d", &int1, &int2);

    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &float1, &float2);

    printf("Enter two characters: ");
    scanf(" %c %c", &char1, &char2);

    printf("\nBefore swapping:\n");
    printf("int1: %d, int2: %d\n", int1, int2);
    printf("float1: %.2f, float2: %.2f\n", float1, float2);
    printf("char1: %c, char2: %c\n", char1, char2);

    swap(&int1, &int2, sizeof(int));
    swap(&float1, &float2, sizeof(float));
    swap(&char1, &char2, sizeof(char));

    printf("\nAfter swapping:\n");
    printf("int1: %d, int2: %d\n", int1, int2);
    printf("float1: %.2f, float2: %.2f\n", float1, float2);
    printf("char1: %c, char2: %c\n", char1, char2);

    return 0;
}
