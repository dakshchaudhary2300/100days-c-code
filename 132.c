#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight light;
    int choice;

    printf("0. RED\n");
    printf("1. YELLOW\n");
    printf("2. GREEN\n");

    printf("Enter traffic light value: ");
    scanf("%d", &choice);

    light = choice;

    switch (light) {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;

        default:
            printf("Invalid value");
    }

    return 0;
}
