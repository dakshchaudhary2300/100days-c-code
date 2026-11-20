#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, highest = 0;

    for(i = 0; i < 5; i++) {

        printf("\nEnter student %d name: ", i + 1);
        fgets(s[i].name, 50, stdin);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);

        getchar();
    }

    for(i = 1; i < 5; i++) {
        if(s[i].marks > s[highest].marks) {
            highest = i;
        }
    }

    printf("\nStudent with Highest Marks\n");

    printf("Name: %s", s[highest].name);
    printf("Roll Number: %d\n", s[highest].roll_no);
    printf("Marks: %.2f\n", s[highest].marks);

    return 0;
}
