#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter two values: ");
    scanf("%d%d", &x, &y);
    // Relational operator and conditional operator
    x > y ? printf("x is greater\n") : printf("y is greater\n");
    // Relational, logical AND and conditional operator
    x > y && x < 10 ? printf("x=%d\n", x) : printf("y=%d\n", y);
    // Relational, logical OR and conditional operator
    x < y || x > 5 ? printf("x=%d\n", x) : printf("y=%d\n", y);
    return 0;
}