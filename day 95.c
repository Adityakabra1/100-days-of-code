#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

// Function to find and return top student
struct Student findTopper(struct Student s[], int n) {
    struct Student top = s[0];

    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;
}

int main() {
    struct Student students[5], topper;
    int i;

  
    for (i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    topper = findTopper(students, 5);


    printf("\n--- Top Student ---\n");
    printf("Roll Number: %d\n", topper.rollNo);
    printf("Name: %s\n", topper.name);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}