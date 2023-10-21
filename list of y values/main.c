#include <stdio.h>
int main()
{
    int y[10],i,w,found;
    printf("input values in list y\n");
    for(i=1;i<10;i++)
    {
        printf("input value of y[%d]-",i);
        scanf("%d",&y[i]);
    }
    printf("searching\n");
    printf("input search key value");
    scanf("%d",&w);
    found=0;
    for(i=0;i<10;i++)
    {
        if(w=y[i])
        {
            printf("w=%d is found at position %d\n",w,i);
            found=1;
        }
    }
    if(found=1)
    {
        printf("found is successful\n");
    }
    else printf("found is not successful\n");
}//end


