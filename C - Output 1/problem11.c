#include <stdio.h>

int main(){
    static const int i = 1;
    static const int j = 2;

    switch (i)
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