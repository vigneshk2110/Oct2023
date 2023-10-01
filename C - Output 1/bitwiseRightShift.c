// Bitwise Right Shift Operator

// Right shift operator shifts all bits towards right 
// by certain number of specified bits. It is denoted by >>.

// 212 = 11010100 (In binary)
// 212 >> 2 = 00110101 (In binary) [Right shift by two bits]
// 212 >> 7 = 00000001 (In binary)
// 212 >> 8 = 00000000 
// 212 >> 0 = 11010100 (No Shift)

#include <stdio.h>

int main() {

    printf("Output = %d\n", 4>>2);
    printf("Output = %d\n", 8>>2);
    printf("Output = %d\n", 8>>3);
    printf("Output = %d\n", 256>>3);
     printf("Output = %d\n", 212>>7);
      printf("Output = %d\n", 212>>8);


    return 0;
}

//  Output = 1
//  Output = 2
//  Output = 1
//  Output = 32
//  Output = 1
//  Output = 0