#include <stdio.h>
int main() {
    int faveNumbers[] = {7, 33, 13, 9, 29};

    int size = sizeof(faveNumbers);
  
    printf("Memory Size of entire array is %d bytes\n", size);

    size = sizeof(faveNumbers[0]);
  
    printf("Memory Size of each element in the array is %d bytes\n", size);
}
//Output = Memory Size of entire array is 20 bytes
//         Memory Size of each element in the array is 4 bytes