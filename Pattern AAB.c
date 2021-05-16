#include<stdio.h>


int main()
{
    int i,j;

    int a;
    for(i=0;i<=3;i++)
    {
         a = 65;
        for(j=0;j<=i;j++)
        {
            printf("%c",a);
            a++;
        }
        printf("\n");
    }

    system("pause");

}


