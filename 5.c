#include<stdio.h>

int main(){
    char c;
    printf("Enter the Lowercae Character is : ");
    scanf("%c",&c);
    printf("Uppercase form of the Lowercase letter is %c ", (c-'a')+65);
    return 0;
}

