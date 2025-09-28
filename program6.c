#include <stdio.h>

int main() {

    int number1, number2;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    // Check if the two numbers are equal using the == operator


    if (number1 == number2) {

        printf("These two numbers are equal.\n");

    }
    else {

        printf("These two numbers are not equal.\n");

    }

    return 0; // Indicate successful program execution
}