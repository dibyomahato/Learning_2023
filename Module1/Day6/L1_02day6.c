#include <stdio.h>

#define MAX_SIZE 100

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeStudents(struct Student students[], int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 0;
        students[i].name[0] = '\0';
        students[i].marks = 0.0;
    }
}

int main() {
    struct Student students[MAX_SIZE];
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    
    initializeStudents(students, size);

    printf("Initialized Student Details:\n");
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
    return 0;
}