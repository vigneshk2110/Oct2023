#include <stdio.h>

int main(){    

    switch ("%s", printf("Hai\n"))
    {
    case 1:
        printf("%s\n", "Case 1");
        break;
    case 2:
        printf("%s\n", "Case 2");
        break;
    case 3:
        printf("%s\n", "Case 3");
        break;
    case 4:
        printf("%s\n", "Case 4");
        break;    
    case 5:
        printf("%s\n", "Case 5");
        break; 
    default:
        printf("%s\n", "Default");
        break;
    }
        return 0;
}