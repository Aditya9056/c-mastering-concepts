#include<stdio.h>

main()
{

    int i,j,m,n,count=0,ncount=0;
    printf("\n Give Size of the Row and Column For 1st Array\n");
    scanf("%d%d",&m,&n);
    int a[m][n];

    printf("\n Enter Elements\n");

    for(i=0;i<m;i<i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //Printing Elements

    for(i=0;i<m;i<i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    //Check If It is Sparse Or Not


    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
                count++;
                if(a[i][j]!=0)
                    ncount++;
        }
    }
    if(count<(n*m)/2)
    {
        printf("\n The Entered Matrix Is Not A Sparse Matrix\n :->If You Want To Enter Another Matrix Then Press 1 And If You Want To Exit Then 2\n");
        scanf("%d",&i);
        switch (i)
        {
            case 1:
            main();

            case 2:
                exit(0);
        }
    }
    //Now It Is A Sparse Matrix So Performing Tabular Conversion

    //Printing Tabular Elements

    printf("\n\n\n\n\n1. No. of Rows(%d) \t 2. No. of Columns(%d) \t 3. No. of Non-Zero Elements(%d)\n",m,n,ncount);


    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {

         if(a[i][j]!=0)
          {
             printf("\t\t%d  \t\t\t    %d  \t\t\t              %d\n",i,j,a[i][j]);
          }
        }
    }

}
