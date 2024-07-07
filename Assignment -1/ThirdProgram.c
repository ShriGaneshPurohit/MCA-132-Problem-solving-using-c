#include <stdio.h>

int main(int argc, char const *argv[])

{
    int sum = 0 ;

    for(int count = 1,number = 1 ; count < 11 ; number++){

        if(!(number%2 ==0)){
            sum +=  number ;
            count ++;
        }
       
        
    }
    

    printf("Sum is =%d ",sum);
    return 0;
}
