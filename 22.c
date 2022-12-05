#include<stdio.h>
int main(){
    int n,i,f=1;
    printf("Enter the Number : ");
    scanf("%d",&n);
    if(n==0 || n==1){
        printf("%d is not prime number",n);
        return 0;
    }
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            f=0;
            break;
        }
    }
    if(f==0) printf("%d is not Prime Number",n);
    else if(f==1) printf("%d is  a  Prime Number\n",n);

  return 0;
}
