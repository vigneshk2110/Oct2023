#include <stdio.h>

int main()
{

    int age = 10;
    /*
    printf("%p\n", &age); */
    int *agePointer = &age;
    printf("%d\n", *agePointer);

    char name[] = "vignesh";
    /*
    printf("%p\n", name);*/
    char *namePointer = name;
    while(*namePointer != '\0') {
    printf("%c", *namePointer);
    
    // move the ptr pointer to the next memory location
    namePointer++;
  }

  printf("\n");

    char num = 'a';
    /*
    printf("%p\n", &num);*/
    char *numPointer = &num;
    printf("%c\n", *numPointer);
    double height = 2.9;
    
    /*
    printf("%p\n", &height);
    */
   
    double *heightPointer = &height;
    printf("%f\n", *heightPointer);

    return 0;
}