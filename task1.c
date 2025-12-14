#include <stdio.h>

int main() {
    int age;
    float balance;

    printf("Enter passenger's age: ");
    scanf("%d", &age);
    printf("Enter account balance: ");
    scanf("%f", &balance);

    if (age < 21)
        printf("Not eligible for ride (underage)\n");
    else if (balance < 200)
        printf("Not eligible (insufficient balance)\n");
    else
        printf("Eligible for ride\n");

    return 0;
}
