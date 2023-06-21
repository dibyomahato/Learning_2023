#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

struct Student {
    char name[50];
    int rollNo;
};

void searchStudent(struct Student students[], int size, const char* name) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student Found:\n");
            printf("Name: %s\n", students[i].name);
            printf("Roll No: %d\n", students[i].rollNo);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student not found.\n");
    }
}

int main() {
    struct Student students[MAX_SIZE];
    int size;
    char searchName[50];
    
    printf("Enter the number of students: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the roll no. of student %d: ", i + 1);
        scanf("%d", &students[i].rollNo);
    }
    printf("Enter the name of the student to search: ");
    scanf("%s", searchName);
    
    searchStudent(students, size, searchName);
    return 0;
}