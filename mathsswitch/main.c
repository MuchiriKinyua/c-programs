#include<stdio.h>
{main()
int a,b,c;
char choice;
{while((choice!='E') or (choice!='e'))
printf("menu\n");
printf("+:perform addition\n");
printf("-:perform subtraction\n");
printf("*:perform multiplication\n");
printf("E,e:exit\n");
printf("___________________________________\n");
printf("input choice:\n");
scanf("%c",&choice);
switch (choice)
{
    case'+':{c=a+b;printf("%d+%d=%d\n",a,b,c);break;}
    case'-':{c=a-b;printf("%d-%d=%d\n",a,b,c);break;}
    case'*':{c=a*b;printf("%d*%d=%d\n,"a,b,c);break;}
    case'E','e':{printf("program terminated\n");break;}
    default:{printf("inputted wrong value-Try again\n";break);
}//end switch
}//end while loop
printf("end subprogram\n");
}//end of main
