#include <stdio.h>

int main(){

int i = 1;

for(printf("Declaration\n"); printf("COndition Check\n"); printf("Incre/Decre\n")){
printf("Inside Body%d\n", i);
i++;
}

    return 0;
}

// Output = Declaration
//          COndition Check
//          Inside Body1
//          Incre/Decre
//          COndition Check
//          Inside Body2
//          Incre/Decre
//          COndition Check
//          Inside Body3
//          Incre/Decre
//  ...........Prints Indefinitely