#include <stdio.h>
#define TEST 5
// Above Statement is called Macros --> Means once Test is Defined at the head , 
// it is substituted again & again

int main(){

    printf("TEST");
    printf("\n%d",TEST);
   
    return 0;
}

// OutPut = TEST
//          5