#include <stdio.h>

int front= -1;
int rear = -1;

void isfull()
{
    if(front==rear+1 && rear==size-1)

        {



        }
}

void isempty()
{
    if(front==-1&&rear==-1)
    {
        return 0;
    }



}
void cenqueue(int size,int cq[size],int ele)
{


}

void dequeue(int size, int cq[size])
{



}

void display(int front,int front,int cq[size])
{
    int i;

    printf("\n\n");

    for(i=front;i<rear;i++)
    {
        printf("%d-->",cq[i]);
    }

}


int main()
{
    int size;
    printf("\nPlease Enter The Size Of The Circular Queue\n");
    scanf("%d",&size);

    int choice;
    int cqueue[size];

                printf("\n 1.Insert Or Enqueue     \n");
                printf("\n 2.Delete Or Dequeue       \n");
                printf("\n 3.Display Or Traverse    \n");
                printf("\n 4. Exit         \n");
                printf("\n--------------------------------------\n");
                printf("Enter your choice:\t");

                scanf("%d",&choice);

                switch(choice)
                {
                        case 1:
                                        insert(front,rear,cqueue);
                                        break;
                        case 2:
                                        delete(front,rear,cqueue);
                                        break;
                        case 3:
                                        display(front,rear,cqueue);
                                        break;

                        case 4:
                                        exit(0);

                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }//end of switch()
}
