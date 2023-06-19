#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;

    for (int i = 0; i < 4; i++) {
        int temp = num;
        int divisor = 1;

        for (int j = 0; j < i; j++) {
            divisor *= 10;
        }

        temp = (temp / (divisor * 10)) * divisor + (temp % divisor);

        if (temp > largest) {
            largest = temp;
        }
    }

    return largest;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num);

    printf("The largest number by deleting a single digit is: %d\n", largestNumber);

    return 0;
}
