#include <stdio.h>
#include <math.h>

// global number of steps based on the range [0, 60] with a 5-degree increment including 0
# define n 13

// global array to store the values of tan(x) for each angle
float tanval[n];


float degtorad(float ang); // will convert degrees to radians
float areaundertan(void); // will calculate area under tan(x) curve using trapezoidal rule

int main(void) {
    int i;
    float area;

    // loop to calculate tan(x) for each angle from 0 to 60 degrees with 5-degree steps
    for (i = 0; i < n; i++)
        // tan(x) for each angle and store in tanval array
        tanval[i] = tan(degtorad((float)(i) * 5.0));


    // get area under the curve of tan(x) using trapezoidal rule
    area = areaundertan();

    // print the calculated area and an actual area
    printf("The final value: %f\n", area);
    printf("The actual value: %f\n", logf(2));

    return 0;
}

// argument is angle in degrees and returns the equivalent in radians
float degtorad(float ang) {
    return ((M_PI * ang) / 180.0); //convert degrees to radians
}

// use the trapezoidal rule to approximate the area under the tan function
// takes no arguments as tanval stored globally
float areaundertan(void) {
    int i;
    // initialize sum with the start and end of the tan curve
    float sum = tanval[0] + tanval[n - 1];  

    // loop and sum tanval as in the deconstructed formula from last week practical
    for (i = 1; i < (n - 1); i++)
        sum += 2 * tanval[i];


    // multiply by the interval width (atan to get the radiance of a and b back)
    sum *= ((atan(tanval[n-1]-atan(tanval[0]))))/(2*(n-1));

    return sum;
}