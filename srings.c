#include<stdio.h>
int main()
{
	char name[20],line[80];
	scanf("%s",name);
	scanf("%10s",name);
	printf("%s",name);
	
	fgets(name,sizeof(name),stdin);
	puts(name);
	
	scanf("%[^\n]",line);
	printf("%s",line);
	
	gets(line);
	printf("%s",line);
	
	do
	{
	ch = getchar();
		line[c] = ch;
		c++;
	}
	while(ch != '\n');
	
	for(c=0;c!='\n';c++);
	scanf("%c",&line[c]);
	for(c=0;c!='\n';c++);
	printf("%c",line[c]);
	                 
}