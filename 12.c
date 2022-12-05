#include<stdio.h>
#define PI acos(-1)
int main(){
     int r;
     float volume_sphere;
     printf("Enter Radius : ");
     scanf("%d",&r);
     volume_sphere = (4/3.0)*PI*r*r*r;
     printf("\nVolume of Sphere = %f",volume_sphere);
     return 0;
}
