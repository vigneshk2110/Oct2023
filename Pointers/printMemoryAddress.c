#include <stdio.h>

int main(){

    int age = 10;
    char name[] = "vignesh";
    char num = 'a';
    double height = 2.9;

    printf("%p\n", &age);
    printf("%p\n", &num);
    printf("%p\n", &height);
    printf("%p\n", name);


    return 0;
}