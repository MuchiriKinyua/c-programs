#include <stdio.h>
{
    int main()

        basicsalary=12000;da=1440;hra=150;ta=120;others=450;
        long int basicsalary;
        long int da;
        long int hra;
        long int ta;
        long int others;
        long int pf;
        long int it;
        long int netpay;
    printf("input basicsalary\n");
    scanf("%ld",&basicsalary);
    printf("input da\n");
    scanf("%ld",da);
    printf("input hra\n");
    scanf("%ld",hra);
    printf("input ta\n");
    scanf("%ld",%ta);
    printf("input others\n");
    scanf("%ld",%others);
    pf=basicsalary*0.14;
    it=basicsalary*0.15;
    netpay=basicsalary+da+hra+ta+others-(pf+it);
    printf("basicsalary\t da\t hra\t ta\t others\t pf\t it\t netpay\n");
    printf("_____________________________________________________\n");
    printf("%ld\t %ld\t %ld\t %ld\t %ld\t %ld\t %ld\t %ld\n";basicsalary,da,hra,ta,others,pf,it,netpay);
    return 0;
}

