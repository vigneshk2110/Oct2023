
#include <stdio.h>
int main() {

    int num = 5;
    int *p = &num;
    printf("Address using %%p = %p\n",p);
    printf("Address using %%d = %d\n",p);
    printf("Address using %%o = %o\n",p);
    
}

// Output
// Address using %p = 0x7ffdd046e63c  --> Hexadecimal or Pointer Format Identfier
// Address using %d = -800659908 --> Integer Format identifier
// Address using %o = 32021563074 --> Octal Format identifier