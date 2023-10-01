#include <stdio.h>

int main(){
    int i = 2;

    switch(i--){
        
        
        case 1:
             printf("%s\n", "Hai");
             break;
             
        case 2:
             printf("%s\n", "Hello");
             break;
            
        default:
             printf("%s\n", "Bye");
             break;

    }
    return 0;
}