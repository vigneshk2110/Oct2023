#include <stdio.h>

int main(){    
    
    if(!!7) // !7 --> False but !!7 --> True
    printf("if Executed\n");
    else   
    printf("Else Executed\n");
    printf("Bye");
   
    return 0;
}

// Output
// if Executed
// Bye