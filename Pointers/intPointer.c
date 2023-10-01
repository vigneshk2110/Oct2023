#include <stdio.h>
int main() {
    int faveNumbers = 21;

    int *addressOfFavNum = &faveNumbers;
  
    printf("The address of faveNumbers = %p.\n", addressOfFavNum);
}
// The address of faveNumbers = 0x7ffe4e7bed2c.