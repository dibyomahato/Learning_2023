#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

struct Student {
    char name[50];
    int marks;
};

int compareStudents(const void* a, const void* b) {
    const struct Student* studentA = (const struct Student*)a;
    const struct Student* studentB = (const struct Student*)b;
    
    if (studentA->marks < studentB->marks) {
        return 1;
    } else if (studentA->marks > studentB->marks) {
        return -1;
    } else {
        return 0;
    }
}

void sortStudents(struct Student students[], int size) {
    qsort(students, size, sizeof(struct Student), compareStudents);
}

int main() {
    struct Student students[MAX_SIZE];
    int size;
    
    printf("Enter the number of students: ");
    scanf("%d", &size);
    
    for (int i = 0; i < size; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    sortStudents(students, size);
    
    printf("Students sorted in descending order based on marks:\n");
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }
    return 0;
}