#include <stdio.h>
#include <math.h>

int main() {
    int age, loyaltyPoints, rideType, requests;
    float balance, distance, surgeMultiplier, ratePerKm, totalFare, discountPercent, finalFare;
    float driverRating, driverDistance;

    //Passenger Eligibility
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter account balance: ");
    scanf("%f", &balance);

    if (age < 21) {
        printf("Not eligible for ride (underage)\n");
        return 0;
    } else if (balance < 200) {
        printf("Not eligible (insufficient balance)\n");
        return 0;
    }
    printf("Passenger eligible for ride\n");

    // Ride type and distance
    printf("Enter ride type (1=Economy, 2=Business, 3=Luxury): ");
    scanf("%d", &rideType);
    printf("Enter ride distance (in km): ");
    scanf("%f", &distance);

    // Surge calculation
    printf("Enter number of ride requests in area: ");
    scanf("%d", &requests);

    surgeMultiplier = sqrt(requests) / 2;
    if (surgeMultiplier > 3)
        surgeMultiplier = 3;

    // Base fare by ride type
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

    // Discount based on loyalty points
    printf("Enter loyalty points: ");
    scanf("%d", &loyaltyPoints);
    discountPercent = (loyaltyPoints > 1000) ? 20.0 : 5.0;

    finalFare = totalFare * (1 - discountPercent / 100);

    // Driver assignment
    printf("Enter driver rating (1-5): ");
    scanf("%f", &driverRating);
    printf("Enter driver distance (in km): ");
    scanf("%f", &driverDistance);

    printf("\n---- Ride Summary -----\n");

    if (driverRating >= 4 && driverDistance <= 5)
        printf("Driver Assigned: Top driver nearby\n");
    else if (driverRating >= 3 && driverDistance <= 10)
        printf("Driver Assigned: Average driver assigned\n");
    else
        printf("Driver Assigned: No suitable driver available\n");

    // Final output
    printf("Ride Type: %s\n", (rideType == 1) ? "Economy" : (rideType == 2) ? "Business" : "Luxury");
    printf("Surge Multiplier: %.2f\n", surgeMultiplier);
    printf("Discount Applied: %.1f%%\n", discountPercent);
    printf("Final Fare after surge and discount: %.2f\n", finalFare);

    printf("---------------------------\n");

    return 0;
}
