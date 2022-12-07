
#include<stdio.h>
int main(){
    int n;
    printf("Array Size : ");
    scanf("%d",&n);
    int arr[10];
    printf("Enter the Element of Array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int mn=arr[0];
    int mx=arr[0];
    int tmp;
    for(int i=1;i<n;i++){
        if(mx<arr[i]){
            tmp=arr[i];
            arr[i]=mx;
            mx=tmp;
        }
    }
    printf("Maximum Element of array is %d\n",mx);
    for(int i=1;i<n;i++){
        if(mn>arr[i]){
            tmp=arr[i];
            arr[i]=mn;
            mn=tmp;
        }
    }
    printf("Minimum Element of array is %d\n",mn);

    return 0;
}
