#include<stdio.h>
struct student{
	int sId;
	float sPer;
	long int sContact;
	char sName[10],sMail[20];
};//student[3]; 

int main()
{
	int i;
	struct student student[3];
	
	printf("Enter Student Details");
	for(i=0;i<3;i++)
	{
		printf("Id , Percentage, Contact, Name, Mail");
		scanf("%d%f%ld%s%s",&student[i].sId,&student[i].sPer,&student[i].sContact,&student[i].sName,&student[i].sMail);
		
	} 
	
	printf("Student Details: \n");
	for(i=0;i<3;i++)
	{
		printf("Id , Percentage, Contact, Name, Mail");
		printf("%d%f%ld%s%s",student[i].sId,student[i].sPer,student[i].sContact,student[i].sName,student[i].sMail);
	} 
	
	int max=student[0].sPer;
	int index=0;
	
	for(i=0; i<3; i++)
	{
		if(max<student[i].sPer)
		{
			max = student[i].sPer;
			index = i;
		}
	}
	printf("Student with highest Percentage is ");
	printf("%d%f%ld%s%s",student[index].sId, student[index].sPer, student[index].sContact, student[index].sName, student[index].sMail);
	
	
	return 0;
}
