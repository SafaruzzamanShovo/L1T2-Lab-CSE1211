#include<stdio.h>
int main(){
  int a;
  printf("Enter the integer :");
  scanf("%d",&a);
  if(a>0) printf("Positive Number\n");
  else if(a<0) printf("Negative Number\n");
  else printf("Number is equal to Zero");

  return 0;
}
