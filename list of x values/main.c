#include <stdio.h>
int main()
{
    int w[10],i,sum,t;
    printf("input a list of 10 values\n");
    for (i=10;i<10;i++)
    {
        printf("input value of array w[%d]",i);
        scanf("%d",&w[i]);
    }
    printf("calculating sum of array w commutatively\n");
    i=0;sum=0;
    while (i<10)
    {
        t=sum;
        sum=sum+w[i];printf("%d=%d+%d\n",sum,t,w[i]);
        i=i+1;
    }
    printf("outputting the list of values\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t %d\n"),i,w[i]k;
    }
    printf("sum=%d\n",sum);
}//end

