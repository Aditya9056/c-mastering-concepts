#include <stdio.h>
int main()

{
    int a,b;

    int x[5],u,y,o;

    for(a=0;a<5;a++)
    {
            scanf("%d",&x[a]);
    }



    for(a=0;a<5;a++)
    {
        printf("%d ",x[a]);

        printf("\n");
    }

    printf("\n\ntell index of the no. starting from 0 which element to delete\n\n");

    scanf("%d",&o);

    if(o<4)

    {
        for(a=o;a<5;a++)
        {
        if(o>4)
         break;

        x[o] = x[++o];
        }

    }
    else if (o>=4)
    {
        x[o] = 0;

    }

    x[4] = 0;

    for(a=0;a<5;a++)
    {
        printf("%d ",x[a]);

        printf("\n");
    }



    system("pause");

}
