#include <stdio.h>

int main(){

int i = 1;

for(printf("Declaration\n"); i<printf("Chck\n"); printf("Incre/Decre\n")){
printf("Inside Body%d\n", i);
i++;
}

    return 0;
}

// Output = Declaration
//          Chck
//          Inside Body1
//          Incre/Decre
//          Chck
//          Inside Body2
//          Incre/Decre
//          Chck
//          Inside Body3
//          Incre/Decre
//          Chck
//          Inside Body4
//          Incre/Decre
//          Chck
//          Print Stops & Condition is Not Satisfied