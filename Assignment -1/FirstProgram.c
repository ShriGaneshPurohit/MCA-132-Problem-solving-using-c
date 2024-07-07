#include <stdio.h>

int main()
{

    // declaration of variable mark
    float marks;

    // asking for input of marks
    printf("Enter marks obtained by student = ");
    scanf("%f", &marks);

    // checking and displaying the grade according to marks
    if (marks >= 90.0)
        printf("\nGrade A");
    else if (marks >= 70.0 && marks < 90.0)
        printf("\nGrade B");
    else if (marks >= 50.0 && marks < 69.0)
        printf("\nGrade C");
    else if (marks < 50.0)
        printf("\nGrade D");

    return 0;
}
