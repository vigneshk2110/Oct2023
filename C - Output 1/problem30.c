#include <stdio.h>

int main(){

int i = 1;

for( ;; ){
printf("Inside Body%d\n", i++);
}

    return 0;
}

//  Output = Inside Body1
//  ....... Prints Indefinitely as there are no increamental section in for loop


