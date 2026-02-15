#include <stdio.h>

unsigned int factorial(unsigned int n)
{
    // Terminating case for recursive calls
    if (n == 1)
    {
        return 1;
    }

    // Recursive self call
    return n * factorial(n - 1);
}

int main()
{
    unsigned int num = 1;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
