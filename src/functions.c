#include <stdio.h>

// Function declaration
int foo(int bar)
{
    return bar * 2;
}

// Function header declaration
int foobar(int fb);

void moo() {
    printf("MOO\n");
}

int main()
{
    printf("%d\n", foo(2));
    printf("%d\n", foobar(2));

    moo();

    return 0;
}


// Function declaration below main function
int foobar(int fb)
{
    return fb + fb;
}
