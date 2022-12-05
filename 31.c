#include<stdio.h>
int main(){
    int n,i,cntodd=0,cnteven=0;
    printf("Enter the range Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==1) cntodd++;
        else cnteven++;
    }
    printf("Number of Odd integer is %d ",cntodd);
    printf("\n Number of even integer is %d",cnteven);

    return 0;
}
