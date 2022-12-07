#include <stdio.h>
int main() {
    char s[1000];
    printf("Enter a string to calculate its length\n"); 
    gets(s);
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}
