#include <stdio.h>

//ONLY FOR STRING
//1st
char *func()
{
    return "Returned String";

}
//2nd

char glob[100];
char *glb()
{
    gets(glob);
    return glob;

}

main()
{
    //1st
    char *ptr;
    ptr = func();
    puts(ptr);
    //ends her

    //2nd
     ptr = glb();

     puts(ptr);



}

