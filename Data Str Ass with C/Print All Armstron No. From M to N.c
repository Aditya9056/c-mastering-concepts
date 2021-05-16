#include <stdio.h>

main(void)
{

    int i,j,o,a,n,m,l=0,c=0,k,s=1;

    printf("\nGive The Range \n");
    scanf("%d%d",&n,&m);


    for(i=n;i<m;i++)
    {
        k=i;
        c=0;
        while(k!=0)
        {
            k=k/10;
            c++;
        }
        k=i;
        for(j=0;j<c;j++)
        {
            s=1;
            a=k%10;
            k=k/10;
            l=0;
            while(l<c)
            {
                s=s*a;
                o=s+o;
                l++;
            }

        if(o!=i)
        {
            printf("\n These Are The Armstrong No. In The Given Range\n %d",o);
        }

        }
    }
    printf("\n These Are The Armstrong No. In The Given Range");


}
