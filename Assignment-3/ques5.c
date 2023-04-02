//Answer of a is : ii) k is a pointer to a pointer to a pointer to a pointer to a char is incorrect syntax since it has more asterisks than pointers to char.

//Answer of b : 
#include<stdio.h>
 void main()
{
int k = 5;
int *p = &k;
int **m = &p;
**m = 6;
printf("%d\n", k);
}