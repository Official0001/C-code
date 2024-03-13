//using r+ mode

//r+ mode not create any new file r+ mode work on existing file.....if we r creating a new file on r+ mode it give error means create any file
//r+ mode used for modify exsting content......means if we modify any content so move cursur of that point and then modify it.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\character.txt","r+");
	
	if(fp==NULL){
		printf("error");
		exit(1);
	}
	fputs("anandmali",fp);
	fputc(' ',fp);
	fclose(fp);
	return 0;
}
