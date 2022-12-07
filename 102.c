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
   int sum=0;
   for(i=0;i<n;i++){
        sum+=*(a+i);
	  
   }
    printf("%d is the sum of all elements",sum);
}
