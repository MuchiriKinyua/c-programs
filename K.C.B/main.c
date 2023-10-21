#include <stdio.h>
int main()
{
char name[25];
int age;
double basicsalary;
double allowance;
double netpay;
printf("input person name-");
scanf("%s",name);
printf("input person age-");
scanf("%d",&age);
printf("input person basicsalary-");
scanf("%lf",&basicsalary);
allowance=0.2*basicsalary;
netpay=basicsalary+allowance;
printf("name\t age\t basicsalary\t allowance\t netpay\n");
printf("________________________________________________________\n");
printf("%s\t %d\t %lf\t lf\t %lf\n",name,age,basicsalary,allowance,netpay);
    return 0;
}
