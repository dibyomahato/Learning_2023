#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

float calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

float calculateSurfaceArea(struct Box* box) {
    float topBottom = 2 * (box->length * box->width);
    float frontBack = 2 * (box->length * box->height);
    float sides = 2 * (box->width * box->height);
    return topBottom + frontBack + sides;
}

int main() {
    struct Box myBox;
    printf("Enter the length of the box: ");
    scanf("%f", &(myBox.length));
    printf("Enter the width of the box: ");
    scanf("%f", &(myBox.width));
    printf("Enter the height of the box: ");
    scanf("%f", &(myBox.height));

    struct Box* boxPtr = &myBox;
    float volume = calculateVolume(boxPtr);
    float surfaceArea = calculateSurfaceArea(boxPtr);

    printf("Volume of the box: %.2f\n", volume);
    printf("Total surface area of the box: %.2f\n", surfaceArea);

    return 0;
}
