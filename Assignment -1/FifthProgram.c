#include<stdio.h>
int main(int argc, char const *argv[])

{
    int sum = 0;
    for(int integerNum = 100 ; integerNum < 1000; integerNum++ ){
        if(!(integerNum % 2) && (integerNum % 5 == 0)){
            sum += integerNum ;
        }
   
    }
     printf("Sum of 3 digit odd natural numbers which are multiple of 5 is = %d",sum);
    return 0;
}
