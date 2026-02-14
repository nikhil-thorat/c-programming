#include <stdio.h>
#include <string.h>

int main()
{
    // Read only string, stored in RO section
    char *username = "butterscotch";
    printf("Username : %s\n", username);

    char name[] = "Nikhil";
    printf("Name : %s\n", name);

    name[0] = 'n';
    printf("Name : %s\n", name);

    // String functions
    printf("Lenght of %s is %lu\n", name, strlen(name));

    if (strncmp(name, username, strlen(username)))
    {
        printf("%s and %s are not same\n", name, username);
    }

    char dest[20] = "Hello";
    char src[20] = "World";

    // Concats Wor to Hello
    strncat(dest, src, 3);
    printf("%s\n", dest);

    return 0;
}
