#include <stdio.h>

int countSetBits(unsigned int num) {
    int count = 0;
    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    unsigned int array[size];

    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%x", &array[i]);
    }

    int totalSetBits = 0;
    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(array[i]);
    }

    printf("Total number of set bits in the array: %d\n", totalSetBits);

    return 0;
}
