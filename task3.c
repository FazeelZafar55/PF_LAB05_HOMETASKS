#include <stdio.h>
#include <math.h>

int main() {
    int requests;
    float surgeMultiplier;

    printf("Enter number of ride requests in area: ");
    scanf("%d", &requests);

    surgeMultiplier = sqrt(requests) / 2;

    if (surgeMultiplier > 3)
        surgeMultiplier = 3;

    printf("Final Surge Multiplier: %.2f\n", surgeMultiplier);
    return 0;
}
