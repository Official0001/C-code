#include<stdio.h>
int main()
{
	FILE *fp;
	char ch[50];
	
	printf("Enter The Data ");
	gets(ch);
	
	fp = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\demo.txt","a");
	fprintf(fp,ch);
	
	printf("Adding Data Successfully");
	
	fclose(fp);
	
}
