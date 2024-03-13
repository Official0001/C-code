#include<stdio.h>
int main()
{
	FILE *fp1, *fp2, *fp3, *fp4;
	
	fp1 = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\demo1.txt","r");
	fp2 = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\even.txt","w");
	fp3 = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\odd.txt","w");
	fp4 = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\primeno.txt","w");
	
	int no, i, flag; 
	
	while(fscanf(fp1, "%d", &no)!= -1)
	{
		if(no%2==0)
		{
			fprintf(fp2, "%d\t" ,no);
		}
		else
		{
			fprintf(fp3, "%d\t" , no);
		}
	
	
	i=2, flag=1;
	while(i<=no/2)
	{
		if(no%i==0)
		{
			flag=0;
			break;
		}
		i++;
	}
	if(flag)
	fprintf(fp4, "%d\t", no);
	
}

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fclose(fp4);
	
	printf("Number Transfer Successfully....");
	
	return 0;
}
