#include <stdio.h>
void display(); // Declaration of a method

int main(){

    float me = 1.375;
    double you = 1.375;

    if(me==you){
        printf("%s\n" , "We are Equal");    
         printf("%f\n" , me);
        printf("%lf\n" , you);

    }
    else{
        printf("%s\n" , "We are NOT Equal");
        printf("%f\n" , me);
        printf("%lf\n" , you);
    }
                
    return 0;
}

// Output  = We are Equal

