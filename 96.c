#include <stdio.h>
int main()
{
   int first, second, *p, *q, sum;

   printf("Enter two integers : ");
   scanf("%d%d", &first, &second);

   p = &first;
   q = &second;

   if(*p>*q) printf("%d is Max value . ",*p);
   else if (*p<*q) printf("%d is the Max. Value ",*q);
   else printf("They are equal");

   return 0;
}
