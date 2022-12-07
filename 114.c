#include <stdio.h>
 
struct employee{
    char    name[30];
    int     empId;
    float   salary;
};
 
int main()
{
    struct employee emp[5];
    for (int i = 0; i < 5; ++i)
    {
    	printf("\nEnter details :\n");
	    printf("Name ?:");          gets(emp[i].name);
	    printf("ID ?:");            scanf("%d",&emp[i].empId);
	    printf("Salary ?:");        scanf("%f",&emp[i].salary);
	     
	    printf("\nEntered detail is:\n");
	    printf("Name: %s\n"   ,emp[i].name);
	    printf("Id: %d\n"     ,emp[i].empId);
	    printf("Salary: %f\n\n",emp[i].salary);
    }
    
    return 0;
}
