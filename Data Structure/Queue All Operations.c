#include <stdio.h>
#include <stdlib.h>

void display(int a[],int *rear,int *front)
{
    int i;

     if(*front == *rear)
    {
        printf("\n The Queue is in UnderFlow Condition Or Empty\n");

        return;
    }
    for(i=*front;i<*rear;i++)
    {
    printf("%d-->",a[i]);
    }

}

int isfull(int a[],int size,int *rear)
{
    if(*rear == size-1)
    {
        printf(" \n The Queue is in Overflow Condition Or Full.!!!\n");
        return 0;
    }
    else
    {
        return 1;
    }
}

int insert(int a[],int size,int *rear,int ele,int *front)
{
    if(*rear==*front)
    {
        *rear=*front=0;
    }
        isfull(a,size,rear);

            a[*rear] = ele;

            *rear=*rear+1;

}

int delete(int *front,int *rear)
{
    printf("%d -- rear \n %d -- front",*rear,*front);
    if(*front==*rear)
    {
        printf("\n The Queue is in UnderFlow Condition Or Empty\n");
        return;
    }

    *front=*front+1;
}

int main()
{

int size = 10;
int queue[size];

    int rear = 0;
    int front = 0;

    int ele,select;



    while(1)
    {
    printf("\n");
    scanf("%d",&select);


    switch(select)
    {

    case 1:

    printf("Enter Element TO be Inserted \n");
    scanf("%d",&ele);

    insert(queue,size,&rear,ele,&front);

    break;

    case 2:
    display(queue,&rear,&front);
    break;

    case 3:
    delete(&front,&rear);
    break;


    default:
        printf("\n Give Correct Choice\n");
    }
}



}
