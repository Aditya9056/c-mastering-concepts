#include <stdio.h>
int main()

{
    int n,i,o,temp;
    n = 5;
    int a[5] = {1,2,3,4,5};
    o = n-1;
    for(i=0;i<n;i++)
    {
    printf("%d \n\n\n\n",a[i]);
    }
    for(i=0;i<n;i++)
    {
            if(i<o)
            {
          temp  = a[i];

          a[i]  = a[o];

          a[o] = temp;
         o--;
         }
    }

    for(i=0;i<n;i++)
    {
    printf("%d \n",a[i]);
    }
 system("pause");
}

