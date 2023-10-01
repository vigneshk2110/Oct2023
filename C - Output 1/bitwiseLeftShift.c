// Bitwise Left Shift Operator

// Left shift operator shifts all bits towards left 
// by a certain number of specified bits. 
// The bit positions that have been vacated by the left shift operator are filled with 0. 
// The symbol of the left shift operator is <<.

// 212 = 11010100 (In binary)
// 212<<1 = 110101000 (In binary) [Left shift by one bit]
// 212<<0 = 11010100 (Shift by 0)
// 212<<4 = 110101000000 (In binary) =3392(In decimal)[Left shift by 4 bits]

#include <stdio.h>

int main() {

    printf("Output = %d\n", 4<<0);
    printf("Output = %d\n", 8<<2);
    printf("Output = %d\n", 8<<3);
    printf("Output = %d\n", 256<<3);
     printf("Output = %d\n", 212<<7);
      printf("Output = %d\n", 212<<8);


    return 0;
}

// Output = 4
// Output = 32
// Output = 64
// Output = 2048
// Output = 27136
// Output = 54272