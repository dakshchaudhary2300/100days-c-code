#include <stdio.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    int choice;

    printf("Enter name: ");
    fgets(p.name, 50, stdin);

    printf("Enter gender (0 for Male, 1 for Female): ");
    scanf("%d", &choice);

    p.gender = choice;

    printf("\nName: %s", p.name);

    if(p.gender == MALE)
        printf("Gender: Male\n");
    else
        printf("Gender: Female\n");

    return 0;
}
