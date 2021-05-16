#include <iostream>
#include <stdio.h>
using namespace std;

class lcm{

    int lcm =0;
    int n1,n2;
    int r1[10];

    public:


    void input(){
            puts("\n Enter No.1 And No.2 \n");
            scanf("%d%d",&n1,&n2);
            printf("%d%d",n1,n2);
    }

    void l_cm(){

            int j =0,i;

        for(i =1; i<n1||i<n2; i++){

            if(i%n1 == 0 && i%n2 == 0)
            {
                r1[j++] = i;
                printf("%d <-r[j-1] \n",r1[j-1],j-1);
            }
        }

        int small = r1[0];

        for(i =0; i<10; i++)
        {
            if(small > r1[i])
            {
                small = r1[i];
            }
        }

        lcm = small;
    }




    void display(){

        printf("\nYour LCM Is:- \n %d \n",lcm);
    if(lcm == 0)
        printf("First Find Lcm \n");
    }
};

int main(){

    lcm l1;

    l1.input();
    l1.l_cm();
    l1.display();



}
