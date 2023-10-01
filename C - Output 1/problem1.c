#include <stdio.h>
#define x 5+2

int main(){
    int i;
    i = x * x * x; 
    // i.e... 5+2 * 5+2 * 5+2 --> evaluated as 5 + (2*5) + (2*5) + 2 --> BODMAS Rule 
    // i = 27
    printf("%d\n", i);
    return 0;
}