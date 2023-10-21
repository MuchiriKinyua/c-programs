#include <stdio.h>
{int main()
int a,b,c;
char choice;
{
    while((choice!='E')or(choice!='e'))
    printf("menu\n");
    printf("+:perform addition\n");
    printf("-:perform subtraction\n");
    printf("*:perform multiplication\n");
    printf("E,e:exit\n");
    printf("_____________________________________\n");
    printf("input choice\n");
    scanf("%c"&choice);
{

   switch(choice)
    case'+':{c=a+b;printf("%d+%d=%d\n",a,b,c);break;}
    case'-':{c=a-b;printf("%d-%d=%d\n",a,b,c);break;}
    case'*':{c=a*b;printf("%d*%d=%d\n",a,b,c);break;}
    case'E','e':printf("programterminated\n");break;}
    default:{printf("inputted wrong choice-try again\n");break;}
}   //end switch
}   //end of while loop
    printf("end of program\n");
}   //end of main
