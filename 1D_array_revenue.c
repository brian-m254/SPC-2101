//1D array to find the weekly revenue and average daily revenue 
/*Name: Brian Masakhwe
// Reg NO: PA106/G/28765/25
*/

#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0, average;
    int i;

    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;

    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}