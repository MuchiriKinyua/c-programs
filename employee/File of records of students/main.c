#include <stdio.h>
int main()
{
    struct student
    {
        char name[35];
        long int idno;
        char collegeno[25];
        char course[30];
    };
    struct studentrecord stud[10];
    FILE studf;
    int i;
    studf=fopen("c:\student\studpf","w+");
    for(i=0;i<10;i++)
    {
        printf("input name-");
        scanf("%s",stud[i].name);
        printf("input id number-");
        scanf("%ld",&stud[i].idno);
        printf("input college number-");
        scanf("%s",stud[i].collegeno);
        printf("input course");
        scanf("%s",stud[i].course);
        fprintf(studf,"%s%ld%s%s",stud[i],name,stud[i],idno,stud[i]);
        studf=fopen("c:\student\stdpf","r");
        i=o;
        while(!eof(studf))
        {
            scanf(studf,"%s%ld%s%s",stud[i].name,stud[i].idno,stud[i].collegeno,stud[i].course);
            printf("%s\t%ld\t%s\t%s\n",stud[i].name,stud[i].idno,stud[i].collegeno,stud(i).course);
            i=i+1;
        }
        fclose(stud);
        return o;
    }//end of program

