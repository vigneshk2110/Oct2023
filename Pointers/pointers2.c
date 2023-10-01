// Dereferencing the Pointer Variable

#include <stdio.h>
int main() {
    char favLetter = 'x';

    char *addressOffavLetter = &favLetter;
  
    printf("The Char stored in the memory of addressOffavLetter = %c.\n", *addressOffavLetter);

    
}
//The Char stored in the memory of addressOffavLetter = x.