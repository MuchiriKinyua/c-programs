#include <stdio.h>
int main()
{int option,a,b,c;
printf("input value of a-");
scanf("%d",&a);
printf("input value of b-");
scanf("%d",&b);
printf("..menu..\n");
printf("1:add a and b\n");
printf("2:subtract a and b\n");
printf("3:multiply a and b\n");
printf("4:Exit\n");
printf("input option from menu-");
scanf("%d",&option);
printf("a=%d and b=%d\n",a,b);
if(option==1)
{
    c=a+b;
    printf("%d+%d=%d\n",a,b,c);
}
else if(option==2)
{
    c=a-b;
    printf("%d-%d=%d\n",a,b,c);
}
else if(option==3)
{
    c=a*b;
    printf("%d*%d=%d\n",a,b,c);
}
else if(option==4)
    printf("inputted wrong value-try again");

    return 0;
}
