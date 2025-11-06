/*
Brian Masakhwe 
PA106/G/28765/25
Program that sums daily sales and prints totals
*/
#include <stdio.h>

int main() {
    FILE *fptr;
    float sale, total = 0;

    fptr = fopen("sales.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    // read and sum all sales values
    while (fscanf(fptr, "%f", &sale) == 1) {
        total += sale;
    }

    fclose(fptr);

    printf("Total sales for the day: %.2f\n", total);
    return 0;
}
