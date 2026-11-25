#include <stdio.h>

int main()
{
    float X, Y, Z;

    printf("Enter the three numbers: ");
    scanf("%f%f%f", &X, &Y, &Z);
    if (X > Y && Y > Z)
    {
        printf("X is maximum\n");
        printf("Z is minimum");
    }
    else if (X > Z && Z > Y)
    {
        printf("X is maximum\n");
        printf("Y is minimum");
    }
    else if (Y > Z && Z > X)
    {
        printf("Y is maximum\n");
        printf("X is minimum");
    }
    else if (Y > X && X > Z)
    {
        printf("Y is maximum\n");
        printf("Z is minimum");
    }
    else if (Z > X && X > Y)
    {
        printf("Z is maximum\n");
        printf("Y is minimum");
    }
    else if (Z > Y && Y > X)
    {
        printf("Z is maximum\n");
        printf("X is minimum");
    }
    return 0;
}