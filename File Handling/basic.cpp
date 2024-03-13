#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char data[25]="Learning Lad";
	int length = strlen(data);
	int cnt;
	
	fp = fopen("E:\Giris Tech Hub\File Handling\fp.txt","w");	
	//fprint("");
	
	if(fp==NULL)
		printf("Unable to create or open the file");
	else
		for(cnt=0; cnt<length; cnt++)
		{
			printf("Writing the character %c \n",data[cnt]);
			fputc(data[cnt],fp);
		}
		printf("Data Written to the file successfully");
		
	fclose(fp);
	
	return 0;
}
