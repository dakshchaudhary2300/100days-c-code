#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role role;
    int choice;

    printf("0. ADMIN\n");
    printf("1. USER\n");
    printf("2. GUEST\n");

    printf("Enter role: ");
    scanf("%d", &choice);

    role = choice;

    switch (role) {
        case ADMIN:
            printf("Welcome Admin. You have full access.");
            break;

        case USER:
            printf("Welcome User. You have limited access.");
            break;

        case GUEST:
            printf("Welcome Guest. You have view-only access.");
            break;

        default:
            printf("Invalid role.");
    }

    return 0;
}
