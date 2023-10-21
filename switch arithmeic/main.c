#include <stdio.h>
{
    main()
    int a,b,c;
    char choice;
    {
        while((choice!='E') OR (choice!='e'))
            printf("menu\n");
        printf("+:perform addition\n");
        printf("-:perform subtraction\n");
        printf("*:perform multipliction\n");
        printf("E,e:exit\n");
        printf("______________________________\n");
        printf("input choice:\n");
        scanf("%c",&choice\n);
        {
            switch(choice)
            case'+':{c=a+b;printf("%d+%d=%d\n",a,b,c);break;}
            case'-':{c=a-b;printf("%d-%d=%d\n",a,b,c);break;}
            case'*':{c=a*b;printf("%d*%d=%d\n",a,b,c);break;}
            case'E','e':printf("program terminated\n");break;}
            default:{printf("inputted wrong choice-try again\n";break};
        }//end switch
    }//end of while loop
    printf("End of program\n");
}//end of main
    return 0;
}
