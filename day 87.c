
#include <stdio.h>

// Define enum for user roles
enum Role {
    ADMIN = 1,
    USER = 2,
    GUEST = 3
};

int main() {
    enum Role r;

    int choice;

    printf("----- USER ROLES -----\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");

    printf("Enter your role: ");
    scanf("%d", &choice);

    r = choice;

    switch (r) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have normal access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You have limited access.\n");
            break;

        default:
            printf("Invalid role selected!\n");
    }

    return 0;
}
