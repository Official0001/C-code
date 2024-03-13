#include<stdio.h>
int main()
{
	FILE *fp;
	char ch[50];
	
	printf("Enter The Data ");
	gets(ch);
	
	fp = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\practiceTest.txt","w");
	fprintf(fp,ch);
	
	printf("Adding Data Successfully");
	
	fclose(fp);
	
}
