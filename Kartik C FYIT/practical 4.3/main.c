#include <stdio.h>
#include <math.h>

int main(){
    double x;

    printf("enter a number: ");
    scanf("%lf", &x);

    printf("square root = %.2lf\n",sqrt(x));
    printf("absolute value = %.2lf\n", fabs(x));

    return 0;
}
