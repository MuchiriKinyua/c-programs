#include <stdio.h>
int main()
Char name[25];
int age;
double basic salary;
double allowance;
double netpay;
printf("input person name");
scanf("%s\%name");
printf("input person age");
scanf("%d\%age");
prinf("input person basicsalary");
scanf("%lf\%basicsalary");
allowance=0.2*basic salary;
net pay=basicsalary+allowance;
printf("name\t age\t basicsalary\t allowance\t netpay\n",);
printf("_____________________________________________________\n",);
printf("%s\t%d\t%lf\t%lf\t%lf\n",name,age,basicsalary,allowance,netpay);
    return 0;
}
