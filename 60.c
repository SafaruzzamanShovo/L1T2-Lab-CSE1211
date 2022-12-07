#include<stdio.h>
int main(){
    int n;
    printf("Array Size : ");
    scanf("%d",&n);
    int arr[10];
    int cntodd=0,cnteven=0;
    printf("Enter the Element of Array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2) cntodd++;
        else cnteven++;
    }

    printf("Total Even integer is %d \nTotal Odd Integer is %d",cnteven ,cntodd);

    return 0;
}
