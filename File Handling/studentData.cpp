#include<stdio.h>
int main()
{
	FILE *fptr;
	
	fptr = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\data.txt","a");
	
	 char name[90];
     int id;
     float per;
     printf("\nEnter name id and percentage of student\n");
     scanf("%s %d %f",&name,&id,&per);
     
     fprintf(fptr,"%s\t%d\t%f\n",name,id,per);
     fclose(fptr);
     
     printf("Student Save Success.................");
	return 0;
}
