#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTop(struct Student s[], int n) {

    struct Student top;
    int i;

    top = s[0];

    for(i = 1; i < n; i++) {

        if(s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;
}

int main() {

    struct Student s[5];
    struct Student top;
    int i;

    for(i = 0; i < 5; i++) {

        printf("\nEnter student %d name: ", i + 1);
        fgets(s[i].name, 50, stdin);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);

        getchar();
    }

    top = findTop(s, 5);

    printf("\n--- Top Student ---\n");

    printf("Name: %s", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
