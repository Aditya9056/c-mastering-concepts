#include<stdio.h>

main()

{
    int s=1,i=0,j,r;
    printf("\n Give No Of Rows\n");
    scanf("%d",&r);

    while(i<=r)
    {
        if(i==0)
        {
            printf("\n\t1\t\n");
        }
        s=11*s;

        printf("\t%d\t  \n",s);

        i++;
    }




}
