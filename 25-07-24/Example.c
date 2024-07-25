#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    a=10; 
    printf("%p\n",&a);

    int *p ;
    p = &a;

    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%p",&p);



    return 0;
}
