// Author : Safaruzzaman Shovo
#include <stdio.h>
#include<math.h>
#define pi acos(-1)
int main() {
    float radius,area;
    scanf("%f",&radius);
    area = pi*radius*radius ;
    printf("Area of the Circle is %.2f\n",area);
    return 0;
}
