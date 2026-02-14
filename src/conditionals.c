#include <stdio.h>

int main()
{
    int age = 0;
    scanf("Enter your age %d", &age);

    if (age >= 18)
    {
        printf("You can drive!\n");
    }
    else
    {
        printf("You cannot drive!\n");
    }

    int num1 = 0;
    int num2 = 0;

    scanf("Enter first number : %d", &num1);
    scanf("Enter second number : %d", &num2);

    if (num1 == num2)
    {
        printf("%d and %d are Equal", num1, num2);
    }
    else if (num1 > num2)
    {
        printf("%d is Greater than %d", num1, num2);
    }
    else
    {
        printf("%d is Less than %d", num1, num2);
    }

    return 0;
}
