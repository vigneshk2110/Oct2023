#include <stdio.h>

int main()
{

    char nameF[25];
    char nameL[25];
    int age;
    char gender[10];

    /*printf("Enter your Fav 1st Name: ");
    scanf("%s", nameF);
    printf("Enter your Fav last Name: ");
    scanf("%s", nameL);

    printf("Enter your Fav Number: ");
    scanf("%d", &age);

    printf("Enter your Fav Gender: ");
    scanf("%s", gender);
    */

    printf("Enter your Fav 1st & Last Name: ");
    scanf("%s%s", nameF, nameL);

    printf("Enter your Fav Number: ");
    scanf("%d", &age);

    printf("Enter your Fav Gender: ");
    scanf("%s", gender);

    printf("Your Character in heaven is a %s named as %s %s and of the age %d\n", gender, nameF, nameL, age);

    return 0;
}