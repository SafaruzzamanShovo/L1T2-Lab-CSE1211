#include <stdio.h>


int calculateSum(int n)
{
	return (n * (4 * n * n + 6 * n - 1) / 3);
}

int main()
{

	int n ;
	printf("Number of tern is : ");
	scanf("%d",&n);


	printf("Sum : %d\n" ,calculateSum(n));

	return 0;
}
