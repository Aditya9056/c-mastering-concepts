#include <stdio.h>
int main()
{
    struct stu
    {
        char name[25];
        int id;
        int mar1;
        int mar2;
        int mar3;
        int total[10];

    };


    struct stu adi;

    scanf("%s%d%d%d%d",&adi.name,&adi.id,&adi.mar1,&adi.mar2,&adi.mar3);

    adi.total[0] = adi.mar1+adi.mar2+adi.mar3;



    printf(" Result Table --- Name \t Id\tMarks 1\t   Marks 2\tMarks3\t\t Total \n\n\n");


    printf("%s \t\t\t %d \t %d \t %d \t\t %d \t\t %d",adi.name,adi.id,adi.mar1,adi.mar2,adi.mar3,adi.total[0]);





}

