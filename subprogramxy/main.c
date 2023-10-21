#include <stdio.h>
int main()
{
    int x,n,y,choice;
    int inputf(int x,int n);
    int sumf(int x,int n);
    int powerf(int x,int n);
    int productf(int x,int n);
    choice=1;
    while((choice!=5)&&(choice>0)&&(choice<=5))
    {
        printf("MENU-OF-TASK\n");
        printf("1:input of x and n\n");
        printf("2:compute sum of x and n\n");
        printf("3:compute power of x and n\n");
        printf("4:compute product of x and n\n");
        printf("5:Exit\n");
        printf("..................................\n");
        printf("input choice..");
        if(choice==1)
        {
            inputf(x,n);
        }
        else if(choice==2)
        {
            y=sumf(x,n);
        }
        else if(choice==3)
        {
            y=powerf(x,n);printf("power=",y);
        }
        else if(choice==4)
        {
            y=productf(x,n);printf("product=%d",y);
        }
        else if(choice==5)
        {
            printf("exiting program\n");
        }
        else
        {
            printf("wrong choice-try again\n");
        }
    }//end of while ()
    printf("x=%d and n=%d\n",x,n);
    }//end of main
    //_________________________________________________
    int inputf(int x,int n)
    {
        printf("input value of x");scanf("%d",&x);
        printf("input value of n");scanf("%d",&n);
        return(x,n);
    }
    //___________________________________________________
    int sumf(int x,int n)
    {
        int s;
        s=x+n;
        return(s);
    }
    //___________________________________________________
    int powerf(int x,int n)
    {
        int p,i;
           i=1;p=1;
           while(i<=n)
           {
               p=p*n;
               i=i+1;
           }
           return(p);
    }
    //____________________________________________________
    int productf(int x,int n)
    {
        int p;
            p=x*n;
        return(p);
    }
    //_____________________________________________________


