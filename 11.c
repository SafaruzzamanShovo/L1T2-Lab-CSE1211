#include<stdio.h>
#define PI acos(-1)
int main()
{
    float r, h, volume;

    printf("Enter Radius and Height of the Cylinder : ");
    scanf("%f%f", &r, &h);

    volume = PI * r * r * h;

    printf("Volume of Cylinder is %f\n", volume);

    return 0;
}
