#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option,a,b,c;
    printf("input value of a-");
    scanf("%d",&a);
    printf("input value of b-");
    scanf("%d",&b);
    printf("...MENU...\n");
    printf("1:Add a+b\n");
    printf("2:Subtract a-b\n");
    printf("3:Multiply a*b\n");
    printf("4:Exit\n");
    printf("input option from menu-");
    scanf("%d",&option);
    printf("a=%d and b=%d\n",a,b);
    if(option==1)
    {
        c=a+b;
        printf("%d=%d=%d\n",a,b,c);

    }
else if (option==2)
{
    c=a-b;
    printf("%d-%d=%d\n",a,b,c);
}
else if (option==3)
{
    c=a*b;
    printf("%d*%d=%d\n",a,b,c);
}

    else if(option==4)
    {printf("Exiting program\n");

    }


else

   printf("inputted wrong choice-Try Again\n");
    return 0;
}
