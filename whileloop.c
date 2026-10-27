#include <stdio.h>

int main() {
    float balance = 5000.0;   
    float amount;

    printf("Starting balance: %f\n", balance);

    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &amount);

        balance = balance - amount;
        printf("Balance after withdrawal: %f\n", balance);
    }

    printf("\nBalance is zero or negative. No more withdrawals allowed.\n");

    return 0;
}
