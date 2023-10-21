#include <stdio.h>
int main()
{
    int age[20];
    int i;
    for(i=0;i<20;i++)
    {
        printf("input student[%d]age",i);
        scanf("%d",&age[i]);
    }
    i=0;
    while(i<20)
    {
        printf("%d\t %d\n";i,age[i]);
        i=i+1
    }

    return 0;
}//end of main()
