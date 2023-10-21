#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration of variables
    char name [25];
    int age;
    double basicsalary;
    double allowance;
    double netpay;
    //implement the method
    printf("input person name");
    scanf("%s",&name);
    printf("input person age");
    scanf("%d",&age);
    printf("input person basicsalary");
    scanf("%lf",&basicsalary);
    allowance=basicsalary*0.2;
    netpay=basicsalary+allowance;
    printf("NAME\t AGE\t BASICSALARY\t ALLOWANCE\t NETPAY\n");
    printf("____________________________________________________________\n");
    printf("%s\t %d\t %lf\t %lf\t %lf\n",name,age,basicsalary,allowance,netpay);
    return 0;
}
