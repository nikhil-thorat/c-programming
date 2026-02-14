#include <stdio.h>

int main()
{
    // 2D array Initialization
    int array[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1},
    };

    int center_element = array[1][1];
    printf("Center element %d\n", center_element);

    array[1][1] = 0;
    center_element = array[1][1];
    printf("Center element %d\n", center_element);

    return 0;
}
