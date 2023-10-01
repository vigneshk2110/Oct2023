#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    printf("This is an example of %s, integer %d and a double value %f", "String", 10, 15.00);
    printf("\n%f\n", 5.0 / 4);

    printf("%f -- power \n", pow(6, 4));

    printf("%f -- floor \n", floor(36.4));
    printf("%f -- ceil \n", ceil(36.4));

    printf("%f -- sqrt \n", sqrt(3600));

    printf("%f -- absolute \n", abs(2500));

    printf("%f -- sin90 \n", sin(90));
    printf("%f -- cos90 \n", cos(90));
    printf("%f -- tan90 \n", tan(90));


    return 0;
}