#include <stdio.h>

int main(){

    int a = 3;
    a = !a>4; // !3>4 --> !3 = false or 0 so 0>4 == false, i.e... a = 0 in int.
   printf("%d",a); 
    return 0;
}

// output = 0