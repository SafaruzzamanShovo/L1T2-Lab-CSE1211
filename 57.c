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
    printf("Elements of Array are: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
