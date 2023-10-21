#include <stdio.h>
int main()

    {struct studrec
    {
        char name[30];
        long int idno;
        char collegeno[25];
    };
    struct studrec studrecv[10];
    printf("input student name-");
    scanf("%s",studrecv.name);
    printf("input student collegeno-");
    scanf("%s",studrecv.collegeno);
    printf("input student idno-");
    scanf("%d",&studrecv.idno);
    printf("..................................................................\n");
    printf("%s\t%s\t%ld\n",studrecv.name,studrecv.collegeno,studrecv.idno);
}//end of main()
