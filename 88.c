#include <stdio.h>
int main()
{
    char str[100];
    int len, startIndex, endIndex;

    printf("Enter any string: ");
    gets(str);

    len = 0;
    while(str[len] != '\0') len++;

    startIndex = 0;
    endIndex   = len-1;
    
    while(startIndex <= endIndex)
    {
        if(str[startIndex] != str[endIndex])
            break;

        startIndex++;
        endIndex--;
    }

    if(startIndex >= endIndex)
    {
        printf("String is Palindrome.");
    }
    else
    {
        printf("String is Not Palindrome.");
    }
    return 0;
}
