// Write a program in c langauage to find the sum of an digits of an given number 

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,temp,rem,sum=0;
    printf("Enter the input name ");
    scanf("%d",&num);
    if (num < 0){
        num *= -1;
    }
    while (num>0)
    {

        temp = num % 10 ;
        if(temp % 2 == 0){
            sum += temp;
        }
        
        num /= 10;
    }
    printf("%d",sum);
    

    return 0;
}
