#include <stdio.h>
int main()
{
    char name[30];
    int age;
    double basicsalary;
    double allowance;
    double netpay;
    printf("input person name\n");
    scanf("%s",name);
    printf("input person age\n");
    scanf("%d",&age);
    printf("input person basicsalary\n");
    scanf("%lf",&basicsalary);
    allowance=0.2*basicsalary;
    netpay=basicsalary+allowance;
    printf("name\tage\tbasicsalary\tallowance\tnetpay\n");
    printf("..................................................................................................\n");
    printf("%s\t%d\t%lf\t%lf\t%lf\n",name,age,basicsalary,allowance,netpay);
    printf("shadi says you get the hell out of here\n");


}
