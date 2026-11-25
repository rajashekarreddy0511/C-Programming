#include <stdio.h>
int main()
{
    int a[] = {10, 15, 20, 25, 30};
    int i, even = 0,odd = 0;
    for(i = 0; i < 5; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }   
    }
    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements = %d\n", odd);
    return 0;
}