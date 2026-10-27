#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, r1, r2;

    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        printf("Two distinct real roots: %.2f and %.2f\n",
               r1, r2);
    } else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Equal real roots: %.2f\n", r1);
    } else {
        printf("Two complex roots.\n");
        printf("Real part = %.2f\n", -b / (2 * a));
        printf("Imaginary part = %.2f\n",
               sqrt(-d) / fabs(2 * a));
    }

    return 0;
}
