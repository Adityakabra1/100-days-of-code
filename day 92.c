#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];
    int i;


    for (i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Student Details ---\n");

    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}