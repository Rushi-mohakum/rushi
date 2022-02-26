#include <stdio.h>
 
/*structure declaration*/
struct employee{
    char    name[30];
    int     empId;
    float   salary;
};
 
int main()
{
    /*declare structure variable*/
    struct employee emp;
     
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:rushi");          gets(emp.name);
    printf("ID ?: 1");            scanf("%d",&emp.empId);
    printf("Salary ?:1500");        scanf("%f",&emp.salary);
     
    /*print employee details*/
    printf("\nEntered detail is:");
    printf("Name:akshit %s"   ,emp.name);
    printf("Id:2 %d"     ,emp.empId);
    printf("Salary:1500 %f\n",emp.salary);
    return 0;
   
     /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:roshan");          gets(emp.name);
    printf("ID ?: 3");            scanf("%d",&emp.empId);
    printf("Salary ?:1500");      scanf("%f",&emp.salary);

    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:ram");          gets(emp.name);
    printf("ID ?: 4");            scanf("%d",&emp.empId);
    printf("Salary ?:1500");        scanf("%f",&emp.salary);
     
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:vijay");          gets(emp.name);
    printf("ID ?: 5");            scanf("%d",&emp.empId);
    printf("Salary ?:1500");        scanf("%f",&emp.salary);
     



}
