#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    double answer = num1 + num2;
    printf("\n%f + %f = %f \n", num1, num2, answer);

}
