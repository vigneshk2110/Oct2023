// Printing the address of a variable

#include <stdio.h>
int main() {
    char favLetter = 'x';

    printf("The address of favLetter = %p.\n", &favLetter);

    char *addressOffavLetter = &favLetter;
  
    printf("The address of favLetter = %p.\n", addressOffavLetter);

    
}
//The address of favLetter = 0x7ffe43702edf. ---> In Hexadecimal Format