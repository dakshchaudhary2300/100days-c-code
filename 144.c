#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void display(struct Student s) {

    printf("\nStudent Details\n");

    printf("Name: %s", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s;

    printf("Enter name: ");
    fgets(s.name, 50, stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    display(s);

    return 0;
}
