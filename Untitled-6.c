#include <stdio.h>

int main()
{
 char strl[50],str2[50],str3[50];
 printf("enter the first sring: ");
 gets(strl);
 printf("enter the second sring: ");
 gets(str2);
 printf("\nlength of the first string: %d"strlen(strl));
 printf("\nlength of the second string: %d"strlen(str2));
 stecpy(str3,str1);
 printf("\n\nAfter copying, str3 = %s", str3);
 strcat(str1,str2);
  printf("\n\nAfter concatenation, str1 = %s", str1);
 strcat("\nstr2, str3);
