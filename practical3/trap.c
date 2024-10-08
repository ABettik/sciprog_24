# include <stdio.h>
# include <math.h>

int main(void)
{
    int N = 12;
    float a = 0;
    float b = 60;

    float b_rad;
    b_rad = (M_PI * b)/180;
    // printf("The value of b in radians is : %f\n", b_rad);

    // tan( in radiance)
    float sum = tan(a) + tan(b_rad); 

    // printf("The sum is: %f\n", sum);

    // int i; // degrees
    // for (i=5; i<60; i+=5) // 5 degree steps
    // {
    //     // printf("The value of i is : %d\n", i);
    //     sum +=2*tan(i*M_PI/180);

    // }

    //while loop
    int i = 5;
    while(i<60){
        sum +=2 * tan(i*M_PI / 180);
        i+=5;

        switch (i%2){
            case 0:
                printf("I am even and here's the value of sum: %f\n", sum);
        }

    }

    // printf("The sum after the loop: %f\n", sum);

    sum =((b_rad -a )/(2*N)) * sum;

    printf("The final value: %f\n", sum);
    printf("The actual value: %f\n", logf(2));

    float abs_diff = fabs(sum - logf(2));
    printf("The absolute difference of actual vs calculated: %f\n",abs_diff);
    float rel_diff = fabs(1-(sum / logf(2)));
    printf("The relative difference of actual vs calculated : %f\n",rel_diff);
    return 0;
}