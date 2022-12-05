#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,area,perimeter,s;
    printf("Enter the Three Side Length of Triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    perimeter=a+b+c;
    s=perimeter/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle is %.2f\n",area);
    printf("Perimeter of the triangle is %.2f\n",perimeter);
    return 0;
}


