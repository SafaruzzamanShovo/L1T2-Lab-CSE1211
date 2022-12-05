#include<stdio.h>

int main(){

    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    char c;
    printf("Enter the Character : ");
    getchar();
    scanf("%c",&c);
    char name[20];
    printf("Enter the String : ") ;
    getchar();
    gets(name);
    printf("The Number is : %d\n",n);
    printf("The Character is : %c\n",c);
    printf("String is : ");
    puts(name);


    return 0;
}
