// // write an program in c language to make an pyramid 

// // 1
// // 1 2 
// // 1 2 3

// #include<stdio.h>

// int main(int argc, char const *argv[])
// {
//     /* code */
//     int lines;
//     scanf("%d",&lines);

//     for(int i = 1 ; i <= lines ; i ++){
//         for(int j = 1 ; j <= i ;j++ ){
//             printf("%d ", j);

//         }
//         printf("\n");
//     }
//     return 0;
// }

// write a program to find out sum of the series  1 + 1/fact(1) + 1/fact(2) ... n

#include<stdio.h>

int fact (int num){
    int fact = 1;
    int num =
    for(int i = 1 ; i< num ;i++){
        fact *= i; 
    }
    return fact;
}

int main(int argc, char const *argv[])

{
    
    int n = 10 , sum = 1;
    for(int i =1;i<=n;i++){
        sum +=  1/fact(n); 

    }
    printf("%d",sum);
    return 0;

}


