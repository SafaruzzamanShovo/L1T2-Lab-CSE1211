#include<stdio.h>
int main(){
  double len, wid, height, volume;

  printf("Enter length, width, and height: ");
  scanf("%lf %lf %lf",&len, &wid, &height);

  volume = len * wid * height;
  printf("Volume=%.2f", volume);

  return 0;
}
