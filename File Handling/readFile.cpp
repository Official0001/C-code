#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\demo.txt","r");
	
	while((ch = fgetc(fp)) != EOF)
	{
		printf("%c",ch);
	}
	
	fclose(fp);
	printf("\nData Read Successfully");
	
	return 0;
}
