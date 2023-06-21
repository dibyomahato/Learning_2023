#include <stdio.h>

#define MAX_SIZE 100

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayStudents(const struct Student students[], int size) {
    printf("Student Details:\n");
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    struct Student students[MAX_SIZE];
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &students[i].rollno);
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }
    
    displayStudents(students, size);
    return 0;
}