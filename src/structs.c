#include <stdio.h>

struct Person
{
    char *name;
    int age;
};

// typed struct
typedef struct Point
{
    int x;
    int y;
} Point;

int main()
{

    struct Person person = {};
    person.name = "Nikhil";
    person.age = 22;

    printf("Name : %s\n", person.name);
    printf("Age : %d\n", person.age);

    // Don't need to write struct in the beginning
    Point point = {6, 7};
    printf("Point X : %d\n", point.x);
    printf("Point Y: %d\n", point.y);

    return 0;
}
