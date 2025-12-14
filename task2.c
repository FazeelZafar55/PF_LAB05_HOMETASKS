#include <stdio.h>

int main() {
    int rideType;
    char distanceType;
    int baseFare;
    printf("Select ride type (1 = Economy, 2 = Business, 3 = Luxury): ");
    scanf("%d", &rideType);
    printf("Enter distance type (s = short, l = long): ");
    scanf(" %c", &distanceType);

    if (distanceType == 's' || distanceType == 'S')
        baseFare = 100;
    else if (distanceType == 'l' || distanceType == 'L')
        baseFare = 300;
    else {
        printf("Invalid distance type.\n");
        return 0;
    }

    printf("Assigned base fare: %d\n", baseFare);
    return 0;
}
