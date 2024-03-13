//w+ mode

//if file doesn't exit means it will create new file and open this file
//if file exist then erase the privious data

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\write+Mode.txt","w+");
	char str[10];
	char ch;
	if(fp==NULL)
	{
		printf("CANT OPEN");
		exit(1);
	}
	
	fputs("Anand",fp);
	//rewind(fp);
	while(!feof(fp))
	{
		ch=fgetc(fp);
		fgets(str,5,fp);
		printf("%c",ch);
	}
	
	fclose(fp);
	return 0;
}
