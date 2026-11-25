#include <stdio.h>
#include <math.h>
int main()
{
    float P, r, t, n, SI, CI;
    printf("Enter P, r, t, n: ");
    scanf("%f%f%f%f", &P, &r, &t, &n);
    SI = (P * r * t) / 100;
    CI = P * pow((1 + r / (100 * n)), (n * t)) - P;
    printf("Simple Interest = %f\n", SI);
    printf("Compound Interest = %f\n", CI);
}