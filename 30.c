#include <stdio.h>
int main() {

  int i, n;
  printf("Enter the number : ");
  scanf("%d", &n);
  int sum=0,rem;
  int m=n;
  while(m>0){
    rem=m%10;
    m/=10;
    sum=sum*10+rem;
  }

  printf("Reverse number is %d ",sum);

  return 0;
}
