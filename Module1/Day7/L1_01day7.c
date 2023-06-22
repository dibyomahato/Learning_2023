#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* sourceFile;
    FILE* destinationFile;
    char sourceFileName[100];
    char destinationFileName[100];
    char ch;
    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);
    printf("Enter the destination file name: ");
    scanf("%s", destinationFileName);

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error opening the source file.\n");
        exit(1);
    }

    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Error creating the destination file.\n");
        fclose(sourceFile);
        exit(1);
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");
    fclose(sourceFile);
    fclose(destinationFile);
    return 0;
}