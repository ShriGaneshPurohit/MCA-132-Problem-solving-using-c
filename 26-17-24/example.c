#include<stdio.h>

void callByValue(int a){
    a = 12;
}

void callByReference(int *a){
    *a = 12;
}


int main(int argc, char const *argv[])
{
    int a = 10;
    callByValue(a);
    printf("%d\n",a);
    callByReference(&a);
    printf("%d\n",a);
    return 0;
}

