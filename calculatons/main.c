#include <stdio.h>
int main()
{int option,a,b,c;
printf("input value of a-");
scanf("%d",&a);
printf("input value of b-");
scanf("%d",&b);
printf("..menu..\n");
printf("1:add a+b\n");
printf("2:subtract a-b\n");
printf("3:multiply a*b\n");
printf("4:exit\n");
printf("input option from menu-");
scanf("%d",&option);
printf("a=%d and b=%d\n",a,b,c);
if (option==1)
{
    c=a+b;
    printf("%d+%d=%d\n",a,b,c);
}
else if (option==2)
{
    c=a-b;
    printf("%d-%d=%d\n",a,b,c);
}
else if (option==3)
{
    c=a+b;
    printf("%d*%d=%d\n",a,b,c);
}
else if (option==4)
{
    printf("exiting program\n");
}
else
    printf("inputed wrong choice=try again\n");
    return ;
    }

