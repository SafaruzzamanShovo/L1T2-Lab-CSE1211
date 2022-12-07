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

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }

    }
    printf("Second Highest element of the array is %d ",arr[n-2]);

    return 0;
}
