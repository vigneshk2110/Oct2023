#include <stdio.h>

int main()
{

    int age = 10;
    /*
    printf("%p\n", &age); */
    int *agePointer = &age; // Pointer variable of int data type to store the memory addrs of age
    printf("%p\n", agePointer); 

    char name[] = "vignesh";
    /*
    printf("%p\n", name);*/
    char *namePointer = name; // Pointer variable of char data type to store the memory addrs of name
    printf("%p\n", namePointer);

    char num = 'a';
    /*
    printf("%p\n", &num);*/
    char *numPointer = &num;// Pointer variable of char data type to store the memory addrs of num
    printf("%p\n", numPointer);

    double height = 2.9;
    /*
    printf("%p\n", &height);*/
    double *heightPointer = &height;// Pointer variable of double data type to store the memory addrs of height
    printf("%p\n", heightPointer);

    return 0;
}