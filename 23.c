#include <stdio.h>

int main() {
    int days, fine;

    printf("Enter number of days late: ");
    scanf("%d", &days);

    if (days < 0) {
        printf("Invalid number of days.\n");
    } else if (days > 30) {
        printf("Membership Cancelled\n");
    } else if (days <= 5) {
        fine = days * 2;
        printf("Fine = Rs. %d\n", fine);
    } else if (days <= 10) {
        fine = 5 * 2 + (days - 5) * 4;
        printf("Fine = Rs. %d\n", fine);
    } else {
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
        printf("Fine = Rs. %d\n", fine);
    }

    return 0;
}
