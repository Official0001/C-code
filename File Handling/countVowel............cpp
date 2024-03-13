#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("E:\\Giris Tech Hub\\File Handling\\fp\\character.txt","r");
	
	char ch;
	int acount=0,scount=0,dcount=0;

	while((ch=fgetc(fp)) != -1) //EOF
	{
		if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
	   	  	++acount;
	
		else if(ch>=48 && ch<=57)
	   	  	++dcount;
	   
		else
	   		++scount;
	   
	}
	
	printf("\nNumber of Alphabet %d\n",acount);
	printf("\nNumber of digit %d\n",dcount);
	printf("\nNumber of Special Symbol %d\n",scount);
	
	fclose(fp);
	return 0;
}
