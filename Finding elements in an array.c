#include <stdio.h>
int main()

{
    int a,b;

    int x[3][3],u,y;

    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            scanf("%d",&x[a][b]);
        }
    }



    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            printf("%d ",x[a][b]);
        }
        printf("\n");
    }


    printf("Give element to search \n\n");
    scanf("%d",&u);

    printf("\n\n");


    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {


                if(u==x[a][b])
                {

                    printf("The element is found on position x[%d][%d] in the matrix",a,b);
                    return;
                }
                else
                {
                    printf("NOt Found");
                    return;
                }
        }
    }



    system("pause");

}
