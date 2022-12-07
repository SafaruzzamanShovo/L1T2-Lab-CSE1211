#include<stdio.h>
int main(){

    int *p; // Basic Declaration of Pointer
    int x=10;
    p=&x;
    printf("The value of X is %d\n",x);
    printf("The address of X is %p",p);

    return 0;
}
