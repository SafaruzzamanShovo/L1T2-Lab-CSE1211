#include <stdio.h>
void main()
{
   int arr[1000];
   int *a,i,j,tmp,n;

   printf(" Size of Array : ");
   scanf("%d",&n);
   a=arr;
   printf(" Array Elements : \n",n);
   for(i=0;i<n;i++){
	  scanf("%d",a+i);
   }
   for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
           if( *(a+i) > *(a+j)){
               tmp = *(a+i);
               *(a+i) = *(a+j);
               *(a+j) = tmp;
           }
       }
   }
   printf("\n Sorted Array is : ");
   for(i=0;i<n;i++){
	  printf("%d ",*(a+i));
   }
    printf("\n");
}
