#include <stdio.h>

int main()

{
    int n,m,sum,temp,i,j;
sum =0;
    scanf("%d",&n);

    //First Array

    int *a=(int *)calloc(n*n,sizeof(int));

    //Second Array

    int *b=(int *)calloc(n*n,sizeof(int));

    int *c=(int *)calloc(n*n,sizeof(int));

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

          scanf("%d",a+i*n+j);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

          printf("%d ",*(a+i*n+j));
        }
        printf("\n");
    }

    //Second array Print

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

          scanf("%d",(b+i*n+j));
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

          printf("%d ",*(b+i*n+j));
        }
        printf("\n");
    }


//Sum OF MAtrix


for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {


                *(c+i*n+j)=*(a+i*n+j)+*(b+i*n+j);
    }

}


for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

          printf("%d ",*(c+i*n+j));
        }
        printf("\n");
    }

}


