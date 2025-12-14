#include <stdio.h>

int main() {
    int loyaltyPoints;
    float discount;
    printf("Enter loyalty points: ");
    scanf("%d", &loyaltyPoints);

    discount = (loyaltyPoints > 1000) ? 20.0 : 5.0;
    printf("Final Discount: %.1f%%\n", discount);

    return 0;
}
