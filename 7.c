#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main(){
    float r;
    printf("Enter the Radius : ");
    scanf("%f",&r);
    float area= pi*r*r;
    float perimeter=2*pi*r;
    printf("Area of the triangle is %.2f\n",area);
    printf("Perimeter of the triangle is %.2f\n",perimeter);
    return 0;
}



