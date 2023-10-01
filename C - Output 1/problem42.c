#include <stdio.h>
void display(); // Declaration of a method

int main(){

         display();
        
    return 0;
}

void display(){
    printf("Hai\n");
    display();
}


// Output = Infinite Loop