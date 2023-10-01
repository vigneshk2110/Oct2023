#include <stdio.h>
int main() {
    char favLetter = 'x';

    char *addressOffavLetter = &favLetter;
  
    printf("The address of favLetter = %p.\n", addressOffavLetter);
}
//The address of favLetter = 0x7ffdc9d07c0f. 