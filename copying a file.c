#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *open,*close;
	int c;
	open = fopen("START","w");
	close = fopen("END","r");
	if(open == NULL)
	{
		printf("File ERROR\n");
		exit(1);
	}
	while((c = fgetc(open))!=EOF)
	fputc(c,close);
	fclose(open);
	fclose(close);
	return 0;
}