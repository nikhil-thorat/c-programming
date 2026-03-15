/*
    #include is a preprocessor directive,
    which behaves as if you've replaced it
    with the content of the specified header
    file.

    The stdio.h contains the declarations for C
    standard I/O functions and the stdlib.h contains
    the declarations for general utlity functions.
*/
#include <stdio.h>
#include <stdlib.h>

/*
    The main function is the entry point of the
    program, which gets called when we run the
    executable.

    C defines 2 possible execution environments
    1. Freestanding -- embedded systems
    2. Hosted -- operating systems

    The main function should return a value of type
    int, if the program executes successfully it should
    return 0, if not it should return a non-zero value
    which sometimes signifies the error code.

    main(void) signifies the the main functions does
    not take any arguments.
  */
int main(void)
{
    /*
        The puts function is provided by stdio.h, which
        prints the given string to the standard output and
        appends a new-line (\n) charachter to the end of the
        given string.
    */

    /*
        WARNING
        The puts function returns the value of type int.
        If a write error occurs it returns a value of a macro
        EOF (negative integer), else a non-negative integer.
    */
    puts("Hello, World");

    /*
        After this conditional check, we are assured that
        our program behaviour is explicitly defined.
    */
    if (puts("Hello, World") == EOF)
    {
        /*
        EXIT_SUCCESS is a macro defined in the stdlib.h
        which evaluates to a non-zero value.
        */
        return EXIT_FAILURE;
    }

    /*
        The printf function let's you print formatted
        string to the standard output.
        The first arugment is the formated string which
        defines how the final output string will be
        displayed to the standard output.
        The %s is the format specifier for the string,
        which will be replaced by the "Hello. World".
        The \n is the escape sequence also called as
        new-line charachter, which tells function to
        include a new line after the end of the string.

        WARNING
        Never pass the user-supplied data as a
        first argument to the printf function, doing
        so can result in formatted output security
        vulnerability.
        Whenever you need to print a string use puts
        instead of printf, because the return value of
        printf is the number of characters it printed
        to the standard output if it is successful,
        else it returns a negative value if error
        occurs, which leads to undefined behaviour.
    */
    printf("%s\n", "Hello, World");

    /*
        EXIT_SUCCESS is a macro defined in the stdlib.h
        which evaluates to 0
    */
    return EXIT_SUCCESS;
}
