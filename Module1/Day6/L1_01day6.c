#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeArray(struct Student* array, int size) {
    char input[100];
    
    for (int i = 0; i < size; i++) {
        printf("Enter details for student %d: ", i + 1);
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%d %19s %f", &array[i].rollno, array[i].name, &array[i].marks);
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar();
    
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));
    
    initializeArray(students, size);
    
    printf("\nInitialized array of students:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d: Roll No. = %d, Name = %s, Marks = %.2f\n", i + 1, students[i].rollno, students[i].name, students[i].marks);
    }
    
    free(students);
    return 0;
}