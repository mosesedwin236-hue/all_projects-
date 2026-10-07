#include <stdio.h>

int main() {
    int consumption[10];

    // Loop to accept the electricity consumption for 10 households
    for (int i = 0; i < 10; i++) {
        printf("Enter the electricity units consumed by household %d: ", i + 1);
        scanf("%d", &consumption[i]);
    }

    printf("\n--- Electricity Consumption Results ---\n");

    // Loop to display the household number and corresponding units consumed
    for (int i = 0; i < 10; i++) {
        printf("Household %d: %d units\n", i + 1, consumption[i]);
    }

    return 0;
}
	
	
	
	
	
	
	

