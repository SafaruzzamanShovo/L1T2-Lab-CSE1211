#include<stdio.h>
#include<math.h>
int main(){
    float a,b,area,perimeter;
    printf("Enter the  Side Length of a Rectangular : ");
    scanf("%f%f",&a,&b);
    perimeter=2*(a+b);
    area = a*b;
    printf("Area of the triangle is %.2f\n",area);
    printf("Perimeter of the triangle is %.2f\n",perimeter);
    return 0;
}



