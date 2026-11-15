#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};


void display(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    printf("Enter Roll Number: ");
    scanf("%d", &s1.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", s1.name);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);


    display(s1);

    return 0;
}