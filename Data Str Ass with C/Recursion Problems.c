#include<stdio.h>

int add(int ,int ,int);
int main()
{

    int i,j,s,z=0;
    printf("\n Give The Range");
    scanf("%d%d",&i,&j);

   s = add(i,j,z);

    printf(" The Sum is \n %d",s);

}

int add(int x,int y,int z)
{
    int s=x;

    if(s<=y)
    {
        z=x+z;
        s++;
        x++;
        add(x,y,z);
        printf("\n\n%d ans",z);

        return z;


    }

}
