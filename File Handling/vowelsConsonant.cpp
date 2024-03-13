#include<stdio.h>
int main()
{
	FILE *fp, *fp1, *fp2 ;
	
	fp = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\character.txt","r");
	fp1 = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\vowels.txt","w");
	fp2 = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\consonant.txt","w");
	
	char ch;
	
	while((ch=fgetc(fp)) != -1)
	{
		if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
		{
			if(ch=='a' || ch=='o' || ch=='u' || ch=='i' || ch=='e' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
				fprintf(fp1, "%c\t" ,ch);
			else
			   fprintf(fp2, "%c\t" ,ch);
		}
	   
	}
	fclose(fp);
	printf("Transfer Successfully \3");
	return 0;
}
