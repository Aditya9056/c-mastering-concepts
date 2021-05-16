#include <stdio.h>

int main() {

    char b[10];
int id = 8798;
    srand(time(NULL));
    int i;

    for(i=0;i<10;i++)
     {
         b[i] = sprintf(b,"%d",id);
     }
    //for(i=0;i<10;i++)
        //printf("%s \n",b);

	i=0;
	while(i<10)
        printf("%c <- %d\n",b[i],i++);

}
