/* program to write and read the file using fprintf and fscanf */
#include<stdio.h>
int main()
{
	FILE *a;
	char name[20];
	int quantity,i;
	float price;
	a = fopen("ITEM","w");
	for(i=0;i<2;i++)
	{
		scanf("%s %d %f",name,&quantity,&price);
		fprintf(a,"%s %d %.2f\n",name,quantity,price);
	}
	fclose(a);
	a = fopen("ITEM","r");
	while(fscanf(a,"%s %d %f",name,&quantity,&price)==3)
	printf("%s %d %.2f\n",name,quantity,price);
	fclose(a);
	return 0;
}