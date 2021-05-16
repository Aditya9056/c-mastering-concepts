#include <stdio.h>
int main()
{
  int a = 0,n=1,o;
  int no;
  int i;

  scanf("%d",&no);

  printf("%d \t",a);

  for(o=2;o<=no;++o)
  {
      i = a+n;

      printf(" %d \t",i);

      n = a;
      a = i;
  }

    system("pause");
}
