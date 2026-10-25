#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int choice = 0;
int num1, num2 = 0;


printf("=================================\n");
printf("        CLI Calculator\n");
printf("=================================\n");
printf("                                 \n");
printf("       version: 1.0.1\n");
printf("                                 \n");
printf("Select an operation:\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("0. Exit\n");
printf("Choice: ");
scanf("%d", &choice);


if (choice == 1) {
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Result: %d\n", num1 + num2);
}
else if (choice == 2) {
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Result: %d\n", num1 - num2);
}
else if (choice == 3) {
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Result: %d\n", num1 * num2);
}
else if (choice == 4) {
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        printf("Result: %.2f\n", (float)num1 / num2);
    }
}
else if (choice == 0) {
    printf("Exiting the calculator.\n");
    
}
else {
    printf("Invalid choice. Please select a valid operation.\n");

}









}
