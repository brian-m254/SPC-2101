/*
Brian Masakhwe 
PA106/G/28765/25
Program that reads student data and from file and displays name and marks
*/
#include <stdio.h>

int main() {
    FILE *fptr;
    char name[50];
    int regno;
    float marks;

    fptr = fopen("results.dat", "r");  
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    printf("Name\tRegNo\tMarks\n");
    printf("--------------------------\n");

    while (fscanf(fptr, "%s %d %f", name, &regno, &marks) == 3) {
        printf("%s\t%d\t%.2f\n", name, regno, marks);
    }

    fclose(fptr);
    return 0;
}
