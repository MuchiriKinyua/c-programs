#include <stdio.h>
#include <stdlib.h>

int main()
{
 char name[25];
 double rate;
 double pamounty1;
 double pamounty2;
 double pamounty3;
 double interest;
 double interesty1;
 double interesty2;
 double interesty3;
 double cinteresty1;
 double cinteresty2;
 double cinteresty3;
 printf("input person name\n");
 scanf("%s",name);
 printf("input rate\n");
 scanf("%lf",&rate);
 printf("input pamounty1\n");
 scanf("%lf",&pamounty1);
 interest=pamounty1*rate;
 interesty1=interest;
 pamounty2=pamounty1+interesty1;
 interesty2=pamounty2*rate;
 pamounty3=pamounty2+interesty2;
 interesty3=pamounty3*rate;
 cinteresty1=interesty1;
 cinteresty2=interesty1+interesty2;
 cinteresty3=cinteresty2+interesty3;
 printf("NAME\n");
 printf("%s\n",name);
 printf("PRINCIPAL\t INTEREST\t COMPOUNDINTEREST\n");
 printf("______________________________________________________\n");
 printf("%lf\t %lf\t %lf\n",pamounty1,interesty1,cinteresty1);
 printf("%lf\t %lf\t %lf\n",pamounty2,interesty2,cinteresty2);
 printf("%lf\t %lf\t %lf\n",pamounty3,interesty3,cinteresty3);



    return 0;
}
