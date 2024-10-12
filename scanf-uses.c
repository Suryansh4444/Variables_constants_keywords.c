#include <stdio.h>  // Include the standard input/output library

int main() {
    // Declare variables to hold user input
    int integerInput;
    float floatInput;
    char charInput[100];  // Array to store a string of characters

    // Prompt user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &integerInput);  // Read an integer from the user

    // Prompt user to enter a floating-point number
    printf("Enter a float: ");
    scanf("%f", &floatInput);  // Read a float from the user

    // Prompt user to enter a string
    printf("Enter a string: ");
    scanf("%s", charInput);  // Read a string (single word) from the user

    // Print the values entered by the user
    printf("You entered integer: %d\n", integerInput);
    printf("You entered float: %.2f\n", floatInput);  // Print float with 2 decimal places
    printf("You entered string: %s\n", charInput);

    return 0;  // Indicate that the program ended successfully
}
