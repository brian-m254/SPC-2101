/*
Brian Masakhwe 
PA106/G/28765/25
Program that appends book titles to a file and confirms file storage without deletion
*/
#include <stdio.h>

int main() {
    FILE *fptr;
    char title[100];

    fptr = fopen("borrowed_books.txt", "a"); // open in append mode
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    printf("Enter book title: ");
    gets(title); // simple input (good for basic learning)

    fprintf(fptr, "%s\n", title);
    fclose(fptr);

    printf("Book title saved successfully.\n");
    return 0;
}
