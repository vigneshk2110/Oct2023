#include <stdio.h>
int main() {

    int prime[5] = {2,3,5,7,11};
    printf("Result using &prime = %p\n",&prime);
    printf("Result using prime = %p\n",prime);
    printf("Result using &prime[0] = %p\n",&prime[0]);


    printf("Result using &prime +1 = %p\n",&prime + 1);
    printf("Result using prime +1 = %p\n",prime  + 1);
    printf("Result using &prime[0] +1= %p\n",&prime[0]  + 1);


    
}

// Output
// Result using &prime = 0x7ffcd592b8b0 --> point to the the whole array. 
// Result using prime = 0x7ffcd592b8b0 --> point to the 0th element 
// Result using &prime[0] = 0x7ffcd592b8b0 --> point to the 0th element 


// Result using &prime + 1 = 0x7ffd2b952654 --> an increase by 1 to it results in an address with an increase of 5 x 4 = 20 bytes 
// Result using prime +1 = 0x7ffd2b952644  --> 4 bytes are added & points 1st element of array 
// Result using &prime[0]+1 = 0x7ffd2b952644 --> 4 bytes are added & points 1st element of array