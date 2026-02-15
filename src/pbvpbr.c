#include <stdio.h>

typedef struct Point
{
    int x;
    int y;
} Point;

// Struct passed as reference
void move(Point *point)
{
    point->x++;
    point->y++;
}

// Pass by value
void increment(int n)
{
    n++;
}

// Pass by reference
void decrement(int *n)
{
    n--;
}

int main()
{
    int num = 4;
    printf("Value of num is %d\n", num);

    increment(num);
    printf("Value of num is still %d\n", num);

    printf("Value of num is %d\n", num);

    decrement(&num);
    printf("Value of num now is %d\n", num);

    Point point = {6, 7};

    move(&point);
    printf("Point X : %d", point.x);
    printf("Point Y : %d", point.y);

    return 0;
}
