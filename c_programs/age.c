#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);
    if (age >= 18 && age <= 80)
    {
        printf("The person is above 18 and below 80 can drive\n");
    }
    else
    {
        printf("The person cannot drive\n");
    }
    return (0);
}
