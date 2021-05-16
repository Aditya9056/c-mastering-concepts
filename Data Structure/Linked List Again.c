#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;

    struct node *link;
};

struct node* root = NULL;


void add_begin()

{
    struct node *temp;

    temp = (struct node *)malloc(sizeof(struct node));

    if(root == NULL)
    {
        root = temp;
    }

    else
    {

        printf("Please Enter NOde data");
        scanf("%d",temp->data);

        temp->link= NULL;

//Node is ready

        temp-> link = root;

        root = temp;

    }


}


int length();

int main()
{


while(1)
{
        int a,op;

        printf("\n 1.Append \n 2. AddatBegin \n 3. Addafter \n 4. Length \n 5. Display \n 6. Delete \n 7. Quit \n");

        scanf("%d",&a);

        switch(a)
            {
            case 1:

                    break;

            case 2:

                add_begin();
                break;

            case 3:

                    break;

            case 4:


                    break;

            case 5:

                    break;

            case 6:
                printf("Enter Node location to delete.");
                scanf("%d",&op);


                break;

            case 7:
               exit(0);

               break;//it wont execute

            default:
            printf("Error \n");

        }
    }
}
