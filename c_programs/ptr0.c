#include <stdio.h>
int main()
{
    int i = 5;
    int *j;
    j = &i;
    printf("The address of i is %u\n", &i);
    printf("The value of i is %d\n", *j);
    return (0);
}
