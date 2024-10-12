#include <stdio.h>  // Include the standard input/output library

int main() {
    // Declare and initialize an integer variable
    int integerVar = 10;

    // Declare and initialize a float variable
    float floatVar = 3.14;

    // Declare and initialize a char variable
    char charVar = 'A';

    // Print the values of the variables
    printf("Integer value: %d\n", integerVar);
    printf("Float value: %f\n", floatVar);  // Use %.2f to format float to 2 decimal places
    printf("Character value: %c\n", charVar);

    // Perform some operations
    int intResult = integerVar + 5;
    float floatResult = floatVar * 2;
    char nextChar = charVar + 1;  // Moves to the next character in the ASCII table

    // Print the results of the operations
    printf("Integer result (integerVar + 5): %d\n", intResult);
    printf("Float result (floatVar * 2): %.2f\n", floatResult);
    printf("Next character (charVar + 1): %c\n", nextChar);

    // Return statement to indicate successful execution
    return 0;
}
