#include <math.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    double result = 0;
    double firstnumber = 0;
    char operator[6];

    printf("Enter a number: ");
    if (scanf("%lf", &firstnumber) != 1)
    {
        printf("Invalid input");
        return 1;
    }
//Checking if the first number is valid and if it is a real number without decimals. %g removes
    printf("What would you like to do with this number?\n");
    printf("For addition (+), enter '+'.\n");
    printf("For subtraction (-), enter '-'.\n");
    printf("For multiplication (*), enter '*'.\n");
    printf("For division (/), enter '/'.\n");
    printf("For squareroot, enter 'sq'.\n");
    printf("For cube (2), enter 'pow'.\n");
//Providing options for the user regarding what they want to do with the number.
    scanf("%5s", operator);

    if (strcmp(operator, "+") == 0)
    {
        double secondnumber;
        printf("Enter the second number: ");
        if (scanf("%lf", &secondnumber) != 1)
        {
            printf("Invalid input");
            return 1;
        }
        result = firstnumber + secondnumber;
        printf("%g + %g = %g\n", firstnumber, secondnumber, result);
    }
    //If the user wants to perform operation with another number, we need to add an additional input.
    else if (strcmp(operator, "-") == 0)
    {
        double secondnumber;
        printf("Enter the second number: ");
        if (scanf("%lf", &secondnumber) != 1)
        {
            printf("Invalid input");
            return 1;
        }
        result = firstnumber - secondnumber;
        printf("%g - %g = %g\n", firstnumber, secondnumber, result);
    }
    //If the user wants to perform operation with another number, we need to add an additional input.
    else if (strcmp(operator, "*") == 0)
    {
        double secondnumber;
        printf("Enter the second number: ");
        if (scanf("%lf", &secondnumber) != 1)
        {
            printf("Invalid input");
            return 1;
        }
        result = firstnumber * secondnumber;
        printf("%g * %g = %g\n", firstnumber, secondnumber, result);
    }
    //If the user wants to perform operation with another number, we need to add an additional input.
    else if (strcmp(operator, "/") == 0)
    {
        double secondnumber;
        printf("Enter the second number: ");
        if (scanf("%lf", &secondnumber) != 1)
        {
            printf("Invalid input");
            return 1;
        }
     //If the user wants to perform operation with another number, we need to add an additional input.
        if (secondnumber == 0)
        {
            printf("Division by zero is not allowed.\n");
            return 1;
        }

        result = firstnumber / secondnumber;
        printf("%g / %g = %g\n", firstnumber, secondnumber, result);
    }
    else if (strcmp(operator, "sq") == 0)
    {
        result = sqrt(firstnumber);
        printf("Squareroot of %g is %g\n", firstnumber, result);
    }
    else if (strcmp(operator, "pow") == 0)
    {
        result = pow(firstnumber, 2);
        printf("Cube of %g is %g\n", firstnumber, result);
    }
    else
    {
        printf("Invalid input\n");
        return 1;
    }

    return 0;
}
