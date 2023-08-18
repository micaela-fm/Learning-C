#include <stdio.h>
#include <stdlib.h>

int main()
{
    double operandOne;
    double operandTwo;
    char operation;

    printf("Enter first operand: ");
    scanf("%lf", &operandOne);
    printf("Enter operation: ");
    scanf(" %c", &operation);
    printf("Enter second operand: ");
    scanf("%lf", &operandTwo);
    printf("\n");

    if( operation == '+'){
        printf("%f", operandOne + operandTwo);
    } else if (operation == '-'){
        printf("%f", operandOne - operandTwo);
    } else if (operation == '*'){
        printf("%f", operandOne * operandTwo);
    } else if (operation == '/'){
        printf("%f", operandOne / operandTwo);
    } else {
        printf("Invalid operation");
    }
    printf("\n");

    return 0;
}
