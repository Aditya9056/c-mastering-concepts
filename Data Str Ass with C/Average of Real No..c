#include <stdio.h>

main()
{
    int i,j,k,o,size,av;
    printf("\n Enter The No. Of Elements Of You Want To Calculate Average\n");
    scanf("%d",&size);

    char a[size];
    int n[size];
    for(i=0;i<size;i++)
    {
        scanf("%s",&a[size]);
        k = a[i];

        //Checking if Operand and then storing

        if(a[i]>='0'&&a[i]<='9')
        {
            n[i]=a[i]-'0';
        }
        else
        {
                if(a[i]==a[0])
                {
                    printf("\n First Char Should Not Be A Operator\n");
                    main();
                }
      k = a[i];

            //Performing Operation On Operand

            switch (k)
            {

            case 42:
                scanf("%d",&n[i]);
                n[i-1]=n[i-1]*n[i];
                i--;
                break;
            case 43:
                scanf("%d",&n[i]);
                n[i-1]=n[i-1]+n[i];
                i--;
                break;

            case 45:
                 scanf("%d",&n[i]);
                n[i-1]=n[i-1]-n[i];
                i--;
                break;

            case 47:
                 scanf("%d",&n[i]);
                n[i-1]=n[i-1]/n[i];
                i--;
                break;
            }


        }

    }

    for(i=0;i<size;i++)
    {
        av = av+n[i];
    }

    av = av/size;

    printf("\nThe Average Is %d\n",av);

}

