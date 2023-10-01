#include <stdio.h>

int main(){
    int i = 65;

    switch(i){
        case 64:
             printf("%d\n", 65);
             break;
        case 'A':
             printf("%c\n", 'A');
             break;
        case 66:
             printf("%d\n", 66);
             break;

    }
    return 0;
}