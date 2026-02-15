#include <stdio.h>
#include <string.h>

int main()
{

    // C-String, name points to the first letter in the string.
    char *name = "Nikhil";
    printf("%c\n", name[0]);

    // Every string ends with null terminator \0
    // which marks the end of the string
    for (int i = 0; i < strlen(name); i++)
    {
        // base address + i = letter at i'th index.
        printf("%c", name[i]);
    };

    printf("\n");

    int num = 4;
    printf("Value of num is %d\n", num);

    // Dereferencing num in variable pointer
    int *pointer = &num;

    printf("Address of pointer is %p\n", pointer);
    printf("Value of pointer is also %d\n", *pointer);

    // Changes actual value of num
    *pointer += 4;
    printf("Value of num is %d\n", num);
    printf("Value of pointer is also %d\n", *pointer);

    return 0;
}
