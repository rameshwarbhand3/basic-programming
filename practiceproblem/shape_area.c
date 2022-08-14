
#include <stdio.h>
#include <stdlib.h>
#include "area.h"

int main()
{
    int choice, r, l, w, b, h;
    float area;

    do
    {
        printf("enter 1 for area of circle\n");
        printf("enter 2 for area of rectangle\n");
        printf("enter 3 for area of triangle\n");
        printf("enter 4 for exit\n");
        printf("enter your choice\n");
        choice = input();
        switch (choice)
        {
        case 1:
            printf("enter radius of circle\n");
            r = input();
            printf("Area of circle is ");
            area = cal_circle_area(r);
            output(area);
            break;
        case 2:
            printf("enter length and width\n ");
            l = input();
            w = input();
            area = cal_rec_area(l, w);
            printf("Area of rectangle is ");
            output(area);
            break;

        case 3:
            printf("enter the base and height\n");
            b = input();
            h = input();
            area = cal_triangle_area(b, h);
            printf("Area of triangle is ");
            output(area);
            break;

        case 4:
            exit(0);
            break;
        }

    } while (choice == 1 || choice == 2 || choice == 3);

    return (0);
}