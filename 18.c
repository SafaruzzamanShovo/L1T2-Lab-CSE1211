#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter the three integers : ");
  scanf("%d%d%d",&a,&b,&c);
  if(a<b){
    if(a<c)printf("%d is the lowest among three\n",a);
    else printf("%d is the lowest among three\n",c);
  }
  else{
    if(b<c) printf("%d is the lowest among three\n",b);
    else printf("%d is the lowest among three\n",c);
  }
  return 0;
}
