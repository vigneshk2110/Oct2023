#include <stdio.h>


void sayHi(){
    printf("hiiii\n");
    
 }

 void sayHello(char name[]){
   printf("Hello %s\n", name);
 }
 
 int main(){

    /*sayHi(); */

    sayHello("Vi");
    sayHello("Vig");
    sayHello("Vigne");
    sayHello("Vignesh");
    sayHello("Vignesh123");
    return 0;
 }

 