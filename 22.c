#include<stdio.h>
int main(){

    int n,i,j,m;
    printf("Enter the two Range  : ");
    scanf("%d %d",&n,&m);
    printf("Prime Numbers between %d and %d are : " , n , m);
    for(i=n;i<=m;i++){
        int f=1;
        if(i==0 || i==1) continue;
        for(j=2;j*j<=i;j++){
                if(i%j==0){
                f=0;
                break;
            }
            //else f=0;
        }
        if(f==1) printf("%d ",i);
        //else if(f==1) printf("%d is not a  Prime Number\n",n);
    }


  return 0;
}
