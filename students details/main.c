#include <stdio.h>
int main()
{
    int age[20];
    int inputf(int *age);
    int outputff(int *age);
    inputf(age);
    outputff(age);
    return 0;
}//end of main()
//_______________________
int inputf(int *age)
{
    int i;
    for(i=1;i<20;i++)
    {
        printf("input age of student %d",i);
        scanf("%d",&age[i]);
        }
    return(age[i]);
}//end of input function
int outputff(int *age)
{
    int i;
    i=0;
    do
    {
        printf("%d\t%d\n",i,age[i]);
        i=i+1;
    }
    while(i<20);
    return(age[i]);

}//end of function
//_______________________________________


