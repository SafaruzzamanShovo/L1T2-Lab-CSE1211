#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the range Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2) printf("%d is the odd Number\n",i);
        else printf("%d is the even Number\n",i);
    }

  return 0;
}
