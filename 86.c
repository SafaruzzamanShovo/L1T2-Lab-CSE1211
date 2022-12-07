#include <stdio.h>
int main()
{
    char s[1000];  
    int i,words=1;
 
    printf("Enter  the string : ");
    gets(s);
     
    for(i=0;s[i];i++)  
    {
    	if(s[i]==32)
    	 words++;
 	}
 	 
    printf("Number of words in string = %d\n",words);
    return 0;
}
