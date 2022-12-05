#include<stdio.h>
int main(){
    int n,i,f=1;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            f=1;
            break;
        }
        else f=0;
    }
    if(f==0) printf("%d is a Prime Number",n);
    else if(f==1) printf("%d is not a  Prime Number\n",n);

  return 0;
}
