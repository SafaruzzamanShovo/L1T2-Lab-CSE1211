#include <stdio.h>
int main()
{
	FILE *fptr;
	char str;
	fptr = fopen ("test.txt", "r");  
	if (fptr == NULL)
	{
		printf("File does not exist or cannot be opened.\n");
		return 0;
	}
	printf("The content of the file test.txt is  :\n");
	str = fgetc(fptr);
	while (str != EOF)
	{
		printf ("%c", str);
		str = fgetc(fptr);
	}
	fclose(fptr);
	return 0;
}
