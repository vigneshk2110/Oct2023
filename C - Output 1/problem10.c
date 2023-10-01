#include <stdio.h>

int main(){
    int i = 1;
    int j = 2;

    switch (1)
    {
    case i:
        printf("%s\n", "Hello");
        break;
    case j:
        printf("%s\n", "Hai");
        break;
    
    default:
        break;
    }
        return 0;
}