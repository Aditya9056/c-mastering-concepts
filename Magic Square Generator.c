#include <stdio.h>

int msquare(int s)
{
    int i,j,mid,co=0,dw,m,n,count;

    int a[s][s];

    mid = s/2;

    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {

          a[i][j]=0;
        }
    }

    i = 0,j = mid;
    count = 0;

        while(count!=s*s)
        {
            count++;

        if(a[i][j]==0)
          {



            if(j==0&&i==0)
              {
                  a[i][j]=++co;

                    i = s-1;
                    j = s-1;

                    m=i;
                    n=j;
              }

        else if(a[i][j]!=0)
          {
              //IF Not FOund ZERO

              i=m;
              j=n;

              i++;



               if(i!=0&&j!=0)
                  {
                      a[i][j]=++co;

                      i--;
                      j--;

                      m=i,n=j;
                  }
                  else if(i==0)
                  {

                  a[i][j] = ++co;
                  i = s-1;
                  j--;

                  //storing the previous value that is going to be used in else if block

                  m = i;
                  n = j;

                  }
            else if(j==0)
            {

            a[i][j]=++co;

             i--;
             j=s-1;

             m=i;n=j;

            }

        }


          }

        else
              {


                  if(i!=0&&j!=0)
                  {
                      a[i][j]=++co;

                      i--;
                      j--;

                      m=i,n=j;
                  }

                  else if(i==0)
                  {

                  a[i][j] = ++co;
                  i = s-1;
                  j--;

                  //storing the previous value that is going to be used in else if block

                  m = i;
                  n = j;

              }
            else if(j==0)
            {

            a[i][j]=++co;

             i--;
             j=s-1;

             m=i;n=j;

            }

        }
    }





        for(i=0;i<s;i++)
        {
            for(j=0;j<s;j++)
            {
                printf(" %d",a[i][j]);
            }
            printf("\n");
        }

}

int main()
{
    int size;

    printf("\n Give the Size of Square Matrix\n");
    scanf("%d",&size);
    msquare(size);


}

