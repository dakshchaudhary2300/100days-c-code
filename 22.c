#include <stdio.h>

int main() {
    float cp, sp, difference;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if (cp <= 0) {
        printf("Cost price must be positive.\n");
    } else if (sp > cp) {
        difference = sp - cp;
        printf("Profit = %.2f\n", difference);
        printf("Profit percentage = %.2f%%\n",
               difference / cp * 100);
    } else if (sp < cp) {
        difference = cp - sp;
        printf("Loss = %.2f\n", difference);
        printf("Loss percentage = %.2f%%\n",
               difference / cp * 100);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
