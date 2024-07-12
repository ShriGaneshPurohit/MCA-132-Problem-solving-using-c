#include <stdio.h>

int main(int argc, char const *argv[])

{
    int sum,rem,fact;
    for(int i =1 ; i < 100000; i++){
        sum = 0 ;
        for (int j = i ; j > 0 ;){
            rem = j% 10 ; 
            j/=10;
            fact = 1;
            for(int k = 1 ; k <= rem; k++){
                fact *= k;
                

            }
            sum += fact;
            

        }
    
    if (sum == i){
        printf("%d \n",i);
    }
    }
    return 0;
}
