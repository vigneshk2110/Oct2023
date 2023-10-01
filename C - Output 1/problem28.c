#include <stdio.h>

int main(){

int i = 1;

for(; i<=3; ){
printf("Inside Body%d\n", i);
}

    return 0;
}

//  Output = Inside Body
//  ....... Prints Indefinitely as there are no increamental section in for loop
