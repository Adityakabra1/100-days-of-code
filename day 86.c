
#include <stdio.h>

// Define enum for menu choices
enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n----- MENU -----\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case ADD:
            printf("Addition = %d\n", a + b);
            break;

        case SUBTRACT:
            printf("Subtraction = %d\n", a - b);
            break;

        case MULTIPLY:
            printf("Multiplication = %d\n", a * b);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
