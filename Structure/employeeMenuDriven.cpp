#include<stdio.h>
#include<string.h>
	struct employ
	{
		int id ,sal;
		char n[20],email[40],ec[15];
	};
//	struct employ

void_display(struct employ e[])
{
	printf("\nDisplay employ id name  email employcontact employ sallary\n");
	for( int i=0 ;i<4 ;i++)
	{		
		printf("\n%d\t %s\t %s\t %d\t %s",e[i].id,e[i].n,e[i].ec,e[i].sal,e[i].email);		
	}
}

void_searchid(struct employ e[],int sid)
{
	int flag=0;
	printf("\nDisplay employ id name  email employcontact employ sallary\n");
	for( int i=0 ;i<4 ;i++)
	{
		
		if(e[i].id==sid)
		{
			flag=1;
			printf("\n%d\t %s\t %s\t %d\t %s",e[i].id,e[i].n,e[i].ec,e[i].sal,e[i].email);
			break;
		}
							
	}
	if(flag)
	{
		printf("\n\nEmploy Id found");
	}
	else
	{
		printf("\n\nEmploy id not found");
	}
}


void_updatedetail(struct employ e[])
{
	char sname[20];
	int i,flag=0,s;
	
	
	printf("\nEnter name to be searched:");
	scanf("%s",&sname);
	
	for(i=0 ;i<4;i++)
	{
		s=strcmp(sname,e[i].n);
		if(s==0)
		{
			printf("\nUpdate detail of this employ:");
			scanf("%d%s%s%d%s",&e[i].id,&e[i].n,&e[i].ec,&e[i].sal,&e[i].email);
			flag=1;
			break;
		}
	}
	 if(flag==0)
	{
		printf("\nNo record found");
	}
	else
	{
		printf("\nDisplay after update the record:");
		for(i=0 ;i<4;i++)
		{
			printf("\n%d\t %s\t %s\t %d\t %s",e[i].id,e[i].n,e[i].ec,e[i].sal,e[i].email);
		}
	}
	
}


void_deletedetail(struct employ e[])
{
	char semail[20];
	int i;
	int flag=0;
	int f;
	printf("\nEnter a email to be searched:");
	scanf("%s",&semail);
	
	//f=strcmp(semail,e[i].email);
	for(i=0;i<4;i++)
	{
		f=strcmp(semail,e[i].email);
		if(f==0)
		{
			
		    for(int j=i;j<4;j++)
			{
				e[j]=e[j+1];
				flag=1;				
			}	
		}
	}
	 if(flag==0)
	{
		printf("\nemail not found");	
	}
	else
	{
		printf("\nDisplay after update the record:");
		for(i=0;i<(4-flag);i++)
		{
			printf("\n%d\t %s\t %s\t %d\t %s",e[i].id,e[i].n,e[i].ec,e[i].sal,e[i].email);
		}
	
	}
}


void_countemploy(struct employ e[])
{
	int i,count=0;
	for(int i=0 ;i<4 ;i++)
	{
		printf("\n%d\t %s\t %s\t %d\t %s",e[i].id,e[i].n,e[i].ec,e[i].sal,e[i].email);
	//	scanf("%d%s%s%d%s",&e[i].id,&e[i].n,&e[i].ec,&e[i].sal,&e[i].email);
		count++;			     
	} 
	printf("\n\nthe employ in company is:%d\n",count);
}


void_ascendingorder(struct employ e[],struct employ temp)
{
	for(int i=0 ;i<4 ;i++)
	{
		for(int j=i+1; j<4; j++)
		{
			if(e[i].sal > e[j].sal)
			{
			temp=e[i];
			e[i]=e[j];
			e[j]= temp;			
			}		
		}
		
	}
	printf("\nThe ascending order of employ sallary is:\n");
	for(int i=0 ;i<4;i++)
	{
		printf("\n%d\t %s\t %s\t %d\t %s",e[i].id,e[i].n,e[i].ec,e[i].sal,e[i].email);
	}
}

void_highest(struct employ e[])
{
	int max1=0,max=0;
//	min=a[0];
	for(int i=0 ;i<4 ;i++)
	{
		if(max1<e[i].sal)
		{
			max1=e[i].sal;
			max=i;
		}
	}
	printf("\n%d\t %s\t %s\t %d\t %s",e[max].id,e[max].n,e[max].ec,e[max].sal,e[max].email);
}

void_maxnmin(struct employ e[])
{
	printf("\nThe employ detail in min sallary is 10000 to max sallary is 60000");
	for(int i=0 ;i<4 ;i++)
	{
		if(10000<=e[i].sal && 60000>=e[i].sal)
		{
			printf("\n%d\t %s\t %s\t %d\t %s",e[i].id,e[i].n,e[i].ec,e[i].sal,e[i].email);
		}
	}
}
void_exit(struct employ e[])
{
	printf("\nExit");
}
int main()
{
	
	struct employ e[4],temp;
	int i,flag=0,choice;
	int sid;
	char sname[30];
//	printf("\n Enter the id to be search:");
//	scanf("%d",&sid);
	do{
	
	printf("\n\nEnter 1 for Add employ detail\nEnter 2 for Display employ detail\nEnter 3 for search employ detail by Id \nEnter 4 for update employ detail by name :");
	printf("\nEnter 5 for delet employ detail by email\nEnter 6 for display the count of employ in compony \nEnter 7 for display list the employ in ascending order of employ sallary ");
	printf("\nEnter 8 for display employ detail in highest salary \nEnter 9 for display the employ detail in minimum salary is 10000 to maximum sallary is 60000");
	printf("\nEnter 10 for Exit\n");
	
	printf("\n \nEnter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
		    //int count=0;
			for(i=0 ;i<4 ;i++)
			{
				printf("Enter employ id name  employcontact employ sallary and email:\n");
				scanf("%d%s%s%d%s",&e[i].id,&e[i].n,&e[i].ec,&e[i].sal,&e[i].email);
			     
			} 
			
		case 2:
			{		
				void_display(e);
				break;
			}
		
		case 3:
			{
				printf("\nEnter the Employ Id:");
				scanf("%d",&sid);
				void_searchid(e,sid);
				break;
			}
		case 4:
			{
				void_updatedetail(e);
				break;
			}
		case 5:
			{
				void_deletedetail(e);
				break;
			}
		case 6:
			{
				void_countemploy(e);
				break;	
			}
		case 7:
			{
				void_ascendingorder(e,temp);
				break;
			}
		case 8:
			{
				void_highest(e);
				break;
			}
		case 9:
			{
				void_maxnmin(e);
				break;
			}
		case 10:
			{
				void_exit(e);
				break;
			}
		default:
			printf("invalid choice:");
	}

   }
   while(choice!=11);
   
   return 0;   		
}
