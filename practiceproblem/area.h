#include<stdio.h>

int input();
void output(float num);
float cal_circle_area(int r);
int cal_rec_area(int l, int w);
float cal_triangle_area(int b, int h);


int input()
{
    int number;
    scanf("%d", &number);
    return (number);
}
void output(float num)
{
    printf("%f\n", num);
}

float cal_circle_area(int r)
{
    return 3.14 * r * r;
}
int cal_rec_area(int l, int w)
{
    return l * w;
}
float cal_triangle_area(int b, int h)
{
    return 0.5 * b * h;
}
