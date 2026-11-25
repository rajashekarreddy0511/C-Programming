#include <stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("enter character (getc):");
    ch = getchar();
    putchar(ch);
    putchar('\n');
    printf("\nenter character (getch): ");
    ch = getch();
    printf("charcter (getch): ");
    putch(ch);
    printf("\nenter the character (getch): ");
    ch = getche();
    printf("character (getche): ");
    putch(ch);
    
}