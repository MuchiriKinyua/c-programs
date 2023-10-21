#include <stdio.h>
#include <stdlib.h>

int main()
{  //declaration of variable
    char name[25];
    int age;
    double basicsalary;
    double allowance;
    double netpay;
    printf("input person name-");
    scanf("%s",&name);
    printf("input person age-");
    scanf("%d",&age);
    printf("input person basicsalary-");
    scanf("%lf",&basicsalary);
    allowance=basicsalary*0.2;
    netpay=basicsalary+allowance;
    printf("name\t Age\t Basicsalary\t allowance\t netpay\n");
    printf("______________________________________________________________________\n");
    printf("%s\t%d\t%lf\t%lf\t%lf\n",name,age,basicsalary,allowance,netpay);
    return 0;
}
