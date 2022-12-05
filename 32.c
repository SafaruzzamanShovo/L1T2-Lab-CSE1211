#include<stdio.h>
int main(){

    int n,i,j,m;
    printf("Enter the two Range  : ");
    scanf("%d %d",&n,&m);
    printf("Prime Numbers between %d and %d are : " , n , m);
    int cnt=0;
    for(i=n;i<=m;i++){
        int f=1;
        if(i==0 || i==1) continue;
        for(j=2;j*j<=i;j++){
                if(i%j==0){
                f=0;
                break;
            }

        }
        if(f==1) {
            cnt++;
        }

    }
    printf("Number of prime is : %d ",cnt);



  return 0;
}
