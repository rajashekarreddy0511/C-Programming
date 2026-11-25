#include <stdio.h>
#include<math.h>

int main()
{
    int a[5],i;
    float sum = 0, mean,variance=0,standard_deviation;
    printf("enter the numbers: ");
    for(i = 0; i < 5; i++)
    { scanf("%d",&a[i]);}
    {
        sum = sum + a[i];
    }

    mean = sum / 5;
    for(i = 0; i < 5; i++)
    {variance = variance + (pow((a[i]-mean),2));}
    variance = variance/5;
    standard_deviation = pow(variance,1/2);
    printf("Mean = %.2f\n", mean);
    printf("Variance = %.2f\n",variance);
    printf("Standard deviation = %.2f\n",standard_deviation);
}