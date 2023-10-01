#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your Name: ");
   /* scanf("%s", name); Stores only the first part of the String*/ 
   fgets(name, 20, stdin);
    printf("\nSo your name is : %s\n", name);

/*
    char grade;
    printf("Enter your Grade: ");
    scanf("%c", &grade);
    printf("\nSo your Grade is : %c\n", grade);

    double height;
    printf("Enter your height: ");
    scanf("%lf", &height);
    printf("\nSo your height is : %lf\n", height);

    int age;
    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("\nSo your Age is : %d\n", age);   

*/

    return 0;
}