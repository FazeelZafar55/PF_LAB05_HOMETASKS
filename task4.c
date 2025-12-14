#include <stdio.h>

int main() {
    float distance, surgeMultiplier, totalFare;
    int rideType;
    float ratePerKm;
    printf("Enter ride type (1=Economy, 2=Business, 3=Luxury): ");
    scanf("%d", &rideType);
    printf("Enter distance (in km): ");
    scanf("%f", &distance);
    printf("Enter surge multiplier: ");
    scanf("%f", &surgeMultiplier);

    if (rideType == 1)
        ratePerKm = 50;
    else if (rideType == 2)
        ratePerKm = 100;
    else if (rideType == 3)
        ratePerKm = 200;
    else {
        printf("Invalid ride type.\n");
        return 0;
    }

    totalFare = distance * ratePerKm * surgeMultiplier;
    printf("Total Fare: %.2f\n", totalFare);

    return 0;
}
