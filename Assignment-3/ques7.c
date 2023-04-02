//The size of a C structure is the sum of the sizes of all its member variables, possibly with some padding added by the compiler for alignment purposes

//To calculate the size structure of c we use the 'sizeof' operator.

#include <stdio.h>

struct Person {
    char name[20];
    int age;
    float height;
};

int main() {
    struct Person p;

    printf("Size of Person struct is %zu bytes\n", sizeof(p));

    return 0;
}
