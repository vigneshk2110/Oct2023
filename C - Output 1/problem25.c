#include <stdio.h>

int main(){

int i = 1;

for(printf("hai\n"); i<=3; printf("Hello\n")){
i++;
}

    return 0;
}
// Output = hai
//          Hello
//          Hello
//          Hello

// Because Loops Executes only the condition check, incremental/decremental section & the body of for-loop. 

// I.e For loop has below structure.

// for(declaration; condition check; increment/decrement){
// } 


