#include<stdio.h>
int main()
{
	FILE *fp;
	char ch[100];
	
	fp = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\character.txt","w");
	
	printf("Enter Data");
	gets(ch);
	
	fprintf(fp,ch);
	fclose(fp);
	
	return 0;
}
