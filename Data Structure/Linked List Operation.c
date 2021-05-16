
#include <stdio.h>
#include <conio.h>

void append(void);
void deleteo(int loc);
void addatbegin(void);
void addafter(void);
int length(void);

struct node
{
    int data;
    struct node* link;
};
    struct node *root;

    int len;

int main(void)

{


while(1)
{
        int a,op;

        printf("\n 1.Append \n 2. AddAtBegin \n 3. AddAfter \n 4. Length \n 5. Display \n 6. Delete \n 7. Exit \n");

        scanf("%d",&a);

        switch(a)
            {
            case 1:
                    append();
                    length();

                    break;

            case 2:

                addatbegin();
                length();

                break;

            case 3:
                    addafter();
                    int length();

                    break;

            case 4:

                    printf("The Length is %d",length());
                    break;

            case 5:
                    display();
                    break;

            case 6:
                printf("Enter Node location to delete.");
                scanf("%d",&op);
                deleteo(op);
                length();


                break;


            case 7:
                exit(0);
                break;

            default:
            printf("Please Enter Correct Choice\n");

        }
    }
}


    void append(void)
    {

        struct node* temp;

          temp = (struct node *)malloc(sizeof(struct node));

          printf("Enter nOde Data \n");

        scanf("%d",&temp->data);

        temp->link = NULL;

        if(root == NULL)
        {
            root = temp;
        }
        else
        {
            struct node* p;

            p = root;

            while(p->link != NULL)
            {
                p = p->link;
            }
            p->link = temp;
        }
    }



    int length()

    {
        int count = 0;
        struct node * temp;

        temp = root;

        while(temp != NULL)
            {
                count ++;

                temp = temp->link;

            }
        len = count;

        return len;
    }


    display()
    {
        struct node * i;

        i = root;

        if(i==NULL)
        {
            printf("The List is Empty \n");
        }
        else
            {

        while(i!=NULL)

        {
            printf("%d -->",i->data);

            i = i->link;
        }

            }
    }

    void addatbegin()
    {
    struct node *temp;

    temp = (struct node *)malloc(sizeof(struct node));

     printf("Please Enter NOde data");

        scanf("%d",&temp->data);

        temp->link= NULL;


    if(root == NULL)
    {
        root = temp;
    }
    else
    {

        temp -> link = root;
        root = temp;
    }
        free(temp);
    }

    void addafter()
    {
        int a,b;
        b = 1;

        struct node *temp,*noc = root;

        printf("Enter Location to Add Node");

        scanf("%d",a);

        temp =(struct node*)malloc(sizeof(struct node));

        printf("Enter The Node Data Please");
        scanf("%d",temp->data);

        temp->link= NULL;


        while(b<a)
        {
            noc = noc->link;

            b++;
        }


        temp -> link = noc ->link;

        noc->link = temp;

    }


    void deleteo(int loc)
    {
        if(root == NULL)
        {
            printf("There are no Nodes in the list.");
        }

       else if(loc>len)
        {
            printf("The entered location does not exist there are only %d node in the List",len);

        }
        else if(loc<len)
        {
            struct node * temp = root,*p;
            int i = 1;

            while(i<loc-1)
            {
                temp = temp->link;
                i++;
            }
            p = temp->link;

            temp->link = p->link;

            p->link = NULL;

        }

        else if(loc==1)
        {
            struct node *temp = root;

            root = temp->link;

            temp->link = NULL;

            free(temp);
        }

        else if (loc=len)
        {
            struct node * temp;
            int a= 1;

            while(a<loc-1)
            {
                    temp = temp->link;
                    a++;
            }

            temp ->link = NULL;

            free(temp);
        }
    }

