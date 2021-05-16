#include <stdio.h>
#include <stdlib.h>
main()
{
    int r,c,j;
    printf("Give Row and Column Values\n");
    scanf("%d%d",&r,&c);
    int *a = (int *)malloc(r*c*(sizeof(int)));

    int i;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",(a+i*c+j));
        }
    }

    printf("\n\n");
       for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {

        printf("%d ",*(a+i*c+j));
        }
        printf("\n");
    }
}
