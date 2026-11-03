
#include <stdio.h>

int main()
{
    FILE *fp;
    int n, i;
    char name[50];
    int roll;
    float marks;

    // Open file in write mode
    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened!");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Store student records in file
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened!");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3)
    {
        printf("\nName: %s", name);
        printf("\nRoll Number: %d", roll);
        printf("\nMarks: %.2f\n", marks);
    }

    fclose(fp);

    return 0;
}
