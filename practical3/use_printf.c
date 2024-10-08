#include <stdio.h>

int main()
{
    int i1 =10;
    int i2 = 200;
    float fl1 = 1.11;
    float fl2 = 2.2222;
    double d1 = 2378423782.48329949;

    printf("You type a string here and then you use special characterst like \n");
    
    printf("Include int value %d, and %d \n", i1, i2);
    printf("Include float value %f, and %.2f \n", fl1, fl2);
    printf("Include double value %.4lf \n", d1);
    printf("Scientific notation %.10e \n", d1);

    return 0;
}