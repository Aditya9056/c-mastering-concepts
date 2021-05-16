#include <stdio.h>
#include <time.h>
#include <stdlib.h>


main()
{
    int length,i,j;
    char pass1;
    time_t tvar;

    time(&tvar);
    struct tm *myTime = localtime(&tvar);



    printf("Enter The Length Of The Password\n");
    scanf("%d",&length);

    int pas[length];

    srand(myTime->tm_sec);

    for(i=0;i<length;i++)
    {
        pas[i] = rand()%99999;
        pass1 = (char)(myTime->tm_sec*rand()*99999);
        pas[i+1] = pass1 ;

        if(pass1!=' ' && pass1!= ' ');
            pas[i+1] = rand()%99999;

    }

    //Printing Password
    printf("\nYour Password is\n");

    pas[length] = '\0';

    i=0;
    while(pas[i]!='\0')
    printf("%d-> %c \n",i,pas[i++]);

    puts("Your Password Is\n");
    i=0;
    while(pas[i]!='\0')
    printf("%c",pas[i++]);


}
