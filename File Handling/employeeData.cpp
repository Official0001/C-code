#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	
	fp = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\employeeData.txt","w");
	
	int id,sal;
	
	char name[10],empType[10];
	printf("Enter id, name, salary, emp type of employee");
	scanf("%d%s%d%s",&id,&name,&sal,&empType);
	
	if(strcmp(empType,"permanent") == 0){
		fprintf(fp,"%s\t%d\t%d\t%s",name,id,sal,empType);
	}
	else
	printf("We Cannot store data in file");
	
//	printf("Data Save Successfully");
	fclose(fp);
	
	return 0;
}
