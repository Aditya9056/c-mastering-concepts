#include <stdio.h>
#include <conio.h>


int main()

{
    int m,n,o,p;

    o = 0;
    p = 0;

    printf("\nEnter No. of lines and Pixels:\n");
    scanf("%d %d",&m,&n);
    char f[m][n];
    printf("\nEnter The Data:\n");


    for(;o<m;o++)
    {
        for(;p<n;p++)
        {
        f[o][p] = 0;
        }
    }

    for(o;o<m;o++)
    {
        for(p;p<n;p++)
        {
        scanf(" %c",&f[o][p]);
        }
    }


    printf("Printing \n\n\n");

    for(o=0;o<m;++o)
    {
        for(p=0;p<n;++p)
        {
            printf("%c",f[o][p]);
        }
        printf("\n");
    }
}


