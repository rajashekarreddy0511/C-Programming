#include <stdio.h>
int main()
{
    int a[] = {5, 12, 18, 25, 30};
    int i, search, found = 0;
    printf("Enter number to search: ");
    scanf("%d", &search);
    for(i = 0; i < 5; i++)
    {
        if(a[i] == search)
        {
            found = 1;
            break;
        }
    }    
    if(found == 1)
    {printf("Element found at index %d", i);}
    else
    {printf("Element not found");}
    return 0;
}