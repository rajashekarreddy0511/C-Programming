#include<stdio.h>
int main()
{
	char line[80];
	FILE *b;
	b = fopen("NOTES","w");
	fputs("LOKESH\n",b);
	fputs("TOPPER!!\n",b);
	fclose(b);
	b = fopen("NOTES","r");
	while (fgets(line,80,b)!=NULL)
	printf("%s",line);
	fclose(b);
	return 0;
}