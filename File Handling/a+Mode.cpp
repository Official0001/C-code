#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	
	fp = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\employeeData.txt","a+");
	
	char ch;
	
	if(fp==NULL)
	{
		printf("file Doesnt Exit");
		exit(1);
	}
	
	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}
	
	fclose(fp);
	
	return 0;
}
