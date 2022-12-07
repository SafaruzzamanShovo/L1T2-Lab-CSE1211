
#include<stdio.h>
int main()

{

	char str[100];//declare string size 100
	char *ptr;
	ptr=str;/*declare pointer which points to string(str)*/
	int count=0;
	printf("Enter the string:\n");
	gets(str);
	while(*ptr!='\0')
	{
		count++;
		ptr++;
	}
	printf("Length of string= %d",count);
	return 0;

}
