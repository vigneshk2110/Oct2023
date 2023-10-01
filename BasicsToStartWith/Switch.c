#include <stdio.h>

int main(){

    char acc = 'E';

    switch (acc)
    {
    case 'E' :
        printf("This is E\n");
        break;

    case 'F':
        printf("This is F\n");
        break;
    
    case 'G':
        printf("This is G\n");
        break;
    
    default:
        printf("This is None\n");
        break;
    }

    return 0;
}