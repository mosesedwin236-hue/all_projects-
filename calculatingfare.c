#include <stdio.h>

double calculateFare(double distance) {
    return distance * 50;
}

int main() {
    double distance;

    printf("Enter distance in kilometers: ");
    scanf("%lf", &distance);

    printf("Fare: KSh %.2f\n", calculateFare(distance));

    return 0;
}
