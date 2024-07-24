// write an simple calculator program in c language for demostrating functions

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int add(int num1, int num2);

    int sub(int num1, int num2);

    int choice, num1, num2, exit = 0;
    printf("Simple calculator");

    do
    {

        printf("Enter Numbers");
        scanf("%d", &num1);
        scanf("%d", &num2);

        printf("1.Addition\n2.substraction\n3.Exit");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("%d", add(num1, num2));
            break;

        case 2:

            printf("%d", sub(num1, num2));
            break;
        case 3:
            choice = 3;
            break;

        default:
            break;
        }
    } while (choice != 3);

    return 0;
}

int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}