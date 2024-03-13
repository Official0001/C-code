#include<stdio.h>
int main()
{
	FILE *fp;
	
	fp = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\character.txt","r");
	
	char ch;
	int c=0, l=1;
	while(ch=fgetc(fp) != EOF)
	{
		if(ch>=0 && ch<=255)
		c++;
		else if(ch=='\n')
		l++;	
	}
	
	printf("Character Count is %d",c);
	printf("\nNew Line is %d",l);
	fclose(fp);
	
	return 0;
}
