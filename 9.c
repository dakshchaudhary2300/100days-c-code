#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest, amount;

    printf("Enter principal, rate (%%), and time in years: ");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    if (principal < 0 || rate < 0 || time < 0) {
        printf("Values cannot be negative.\n");
        return 0;
    }

    simpleInterest = principal * rate * time / 100.0;
    amount = principal * pow(1 + rate / 100.0, time);
    compoundInterest = amount - principal;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);
    printf("Compound Amount = %.2f\n", amount);

    return 0;
}
