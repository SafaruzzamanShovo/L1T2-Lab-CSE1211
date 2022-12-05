#include<stdio.h>
#include<math.h>
int main(){
    float a,area,perimeter;
    printf("Enter the  Side Length of a Square : ");
    scanf("%f",&a);
    perimeter=4*a;
    area = a*a;
    printf("Area of the triangle is %.2f\n",area);
    printf("Perimeter of the triangle is %.2f\n",perimeter);
    return 0;
}



