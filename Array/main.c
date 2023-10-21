#include <stdio.h>
int main()
//record declaration
{
   struct studrec

{
    char name[35];
    long int idno;
    char collegeno[30];
};
struct studrec studrecv[10];
int i;
for(i=0;i<10;i++)
{
printf("input student name-");
scanf("%s",studrecv[i].name);
printf("input student college number-");
scanf("%s",studrecv[i].collegeno);
printf("input student id number-");
scanf("%d",&studrecv[i].idno);
}//end of input loop
printf("name\t collegeno\t idno\n");
i=0;
while(i<10)
{
    printf("%s\t %s\t %ld\n",studrecv[i].name,studrecv[i].collegeno,studrecv[i].idno);
    i=i+1;
}//end of output loop
return 0;
}//end of main()
