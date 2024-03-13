#include<stdio.h>
#include<string.h>
struct food 
{
	int fid,fprice;
	char fname[20],fcat[20];
};

void_displaydetail(struct food f[])
{
	printf("\nDisplay food Id food name food price and food category:\n");
	printf("\nFood Id\tFood Name\t price\t categ");
	for(int i=0 ;i<5 ;i++)
	{
		printf("\n%d\t%s\t%d\t%s",f[i].fid,f[i].fname,f[i].fprice,f[i].fcat);
	}
}

void_pricerange(struct food f[])
{
	printf("\nDisplay food whoes price range between 100 to 500");
	printf("\nFood Id\tFood Name\t price\t categ");
	for(int i=0 ;i<5 ;i++)
	{
		if(100<=f[i].fprice && 500>=f[i].fprice)
		{
			printf("\n%d\t%s\t%d\t%s",f[i].fid,f[i].fname,f[i].fprice,f[i].fcat);
		}
	}
}

void_searchid(struct food f[],int sid)
{
	int flag=0;
	printf("\nDisplay food Id food name food price and food category:\n");
	printf("\nFood Id\tFood Name\t price\t categ");
	for( int i=0 ;i<5 ;i++)
	{
		
		if(f[i].fid==sid)
		{
			flag=1;
			printf("\n%d\t%s\t%d\t%s",f[i].fid,f[i].fname,f[i].fprice,f[i].fcat);
			break;
		}
							
	}
	if(flag)
	{
		printf("\n\nFood Id found");
	}
	else
	{
		printf("\nFood id not found");
	}
}

void_findname(struct food f[])
{
	char sname[20];
	int i,flag=0,s;
	
	
	printf("\nEnter food name to be searched:");
	scanf("%s",&sname);
	
	for(i=0 ;i<5;i++)
	{
		s=strcmp(sname,f[i].fname);
		if(s==0)
		{
			printf("\n%d\t%s\t%d\t%s",f[i].fid,f[i].fname,f[i].fprice,f[i].fcat);
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("\n\nFood Name found");
	}
	else
	{
		printf("\nFood Name not found");
	}
	 	
}

void_findprice(struct food f[],int sprice)
{
	int flag=0;
	printf("\nDisplay food Id food name food price and food category:\n");
	printf("\nFood Id\tFood Name\t price\t categ");
	for( int i=0 ;i<5 ;i++)
	{
		
		if(f[i].fprice==sprice)
		{
			flag=1;
			printf("\n%d\t%s\t%d\t%s",f[i].fid,f[i].fname,f[i].fprice,f[i].fcat);
			break;
		}
							
	}
	if(flag)
	{
		printf("\n\nFood Detail found");
	}
	else
	{
		printf("\nFood detail not found");
	}
}

void_findcategory(struct food f[])
{
	char scategory[20];
	int i,flag=0,s;
	
	
	printf("\nEnter food category to be searched:");
	scanf("%s",&scategory);
	
	for(i=0 ;i<5;i++)
	{
		s=strcmp(scategory,f[i].fcat);
		if(s==0)
		{
			printf("\n%d\t%s\t%d\t%s",f[i].fid,f[i].fname,f[i].fprice,f[i].fcat);
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("\n\nFood  found");
	}
	else
	{
		printf("\nFood Not found");
	}
	 	
}

void_updatebyid(struct food f[],int sfid)
{

	int flag=0;
	

	
	for(int i=0 ;i<5;i++)
	{
	
		if(f[i].fid==sfid)
		{
			printf("\nUpdate detail of this food:");
			scanf("%d%s%d%s",&f[i].fid,f[i].fname,&f[i].fprice,&f[i].fcat);
			flag=1;
			break;
		}
	}
	 if(flag==0)
	{
		printf("\nNo food Id found");
	}
	else
	{
		printf("\nDisplay after update the Detail:");
	printf("\nFood Id\tFood Name\t price\t categ");
		for(int i=0 ;i<5;i++)
		{
			printf("\n%d\t%s\t%d\t%s",f[i].fid,f[i].fname,f[i].fprice,f[i].fcat);
		}
	}
	
}

void_updatebyname(struct food f[])
{
	char sname[20];
	int i,flag=0,s;
	
	
	printf("\nEnter name to be searched:");
	scanf("%s",&sname);
	
	for(i=0 ;i<5;i++)
	{
		s=strcmp(sname,f[i].fname);
		if(s==0)
		{
			printf("\nUpdate detail of this Food:");
			scanf("%d%s%d%s",&f[i].fid,f[i].fname,&f[i].fprice,&f[i].fcat);
			flag=1;
			break;
		}
	}
	 if(flag==0)
	{
		printf("\nNo detail found");
	}
	else
	{
		printf("\nDisplay after update the Detail:");
		printf("\nFood Id\tFood Name\t price\t categ");
		for(i=0 ;i<5;i++)
		{
			printf("\n%d\t%s\t%d\t%s",f[i].fid,f[i].fname,f[i].fprice,f[i].fcat);
		}
	}
	
}
void_updatebyprice(struct food f[],int sprice)
{

	int flag=0;	
	for(int i=0 ;i<5;i++)
	{
	//	f=strcmp(sfid,f[i].fid);
		if(f[i].fprice==sprice)
		{
			printf("\nUpdate detail of this food:");
			scanf("%d%s%d%s",&f[i].fid,f[i].fname,&f[i].fprice,&f[i].fcat);
			flag=1;
			break;
		}
	}
	 if(flag==0)
	{
		printf("\nNo food found");
	}
	else
	{
		printf("\nDisplay after update the Detail:");
		printf("\nFood Id\tFood Name\t price\t categ");
		for(int i=0 ;i<5;i++)
		{
			printf("\n%d\t%s\t%d\t%s",f[i].fid,f[i].fname,f[i].fprice,f[i].fcat);
		}
	}
	
}

void_updatebycategory(struct food f[])
{
	char scategory[20];
	int i,flag=0,s;
	
	
	printf("\nEnter name to be searched:");
	scanf("%s",&scategory);
	
	for(i=0 ;i<5;i++)
	{
		s=strcmp(scategory,f[i].fcat);
		if(s==0)
		{
			printf("\nUpdate detail of this Food:");
			scanf("%d%s%d%s",&f[i].fid,f[i].fname,&f[i].fprice,&f[i].fcat);
			flag=1;
			break;
		}
	}
	 if(flag==0)
	{
		printf("\nNo detail found");
	}
	else
	{
		printf("\nDisplay after update the Detail:\n");
		printf("\nFood Id\tFood Name\t price\t categ");
		for(i=0 ;i<5;i++)
		{
			printf("\n%d\t%s\t%d\t%s",f[i].fid,f[i].fname,f[i].fprice,f[i].fcat);
		}
	}
	
}

void_deletebyid(struct food f[],int sfid)
{
	int i;
	int flag=0;	
	//f=strcmp(semail,e[i].email);
	for(i=0;i<5;i++)
	{
		if(f[i].fid==sfid)
		{
			
		    for(int j=i;j<5;j++)
			{
				f[j]=f[j+1];
				flag=1;				
			}	
		}
	}
	 if(flag==0)
	{
		printf("\nFood not found");	
	}
	else
	{
		printf("\nDisplay after Delete the Detail:\n");
		printf("\nFood Id\tFood Name\t price\t categ");
		for(i=0;i<(5-flag);i++)
		{
			printf("\n%d\t%s\t%d\t%s",f[i].fid,f[i].fname,f[i].fprice,f[i].fcat);
		}
	
	}
}

void_deletebyname(struct food f[])
{
	char sname[20];
	int i,flag=0,s;	
	printf("\nEnter name to be searched:");
	scanf("%s",&sname);
	
	for(i=0;i<5;i++)
	{
		s=strcmp(sname,f[i].fname);
		if(s==0)
		{
			
		    for(int j=i;j<5;j++)
			{
				f[j]=f[j+1];
				flag=1;				
			}	
		}
	}
	 if(flag==0)
	{
		printf("\nFood not found");	
	}
	else
	{
		printf("\nDisplay after Delete the Detail:\n");
		printf("\nFood Id\tFood Name\t price\t categ");
		for(i=0;i<(5-flag);i++)
		{
			printf("\n%d\t%s\t%d\t%s",f[i].fid,f[i].fname,f[i].fprice,f[i].fcat);
		}
	
	}
}

void_deletebyprice(struct food f[],int sprice)
{
	int i;
	int flag=0;	
	//f=strcmp(semail,e[i].email);
	for(i=0;i<5;i++)
	{
		if(f[i].fprice==sprice)
		{
			
		    for(int j=i;j<5;j++)
			{
				f[j]=f[j+1];
				flag=1;				
			}	
		}
	}
	 if(flag==0)
	{
		printf("\nFood not found");	
	}
	else
	{
		printf("\nDisplay after Delete the Detail:\n");
		printf("\nFood Id\tFood Name\t price\t categ");
		for(i=0;i<(5-flag);i++)
		{
			printf("\n%d\t%s\t%d\t%s",f[i].fid,f[i].fname,f[i].fprice,f[i].fcat);
		}
	
	}
}

void_deletebycategory(struct food f[])
{
	char scategory[20];
	int i,flag=0,s;	
	printf("\nEnter category to be searched:");
	scanf("%s",&scategory);
	
	for(i=0;i<5;i++)
	{
		s=strcmp(scategory,f[i].fcat);
		if(s==0)
		{
			
		    for(int j=i;j<5;j++)
			{
				f[j]=f[j+1];
				flag=1;				
			}	
		}
	}
	 if(flag==0)
	{
		printf("\nFood not found");	
	}
	else
	{
		printf("\nDisplay after Delete the Detail:\n");
		printf("\nFood Id\tFood Name\t price\t categ");
		for(i=0;i<(5-flag);i++)
		{
			printf("\n%d\t%s\t%d\t%s",f[i].fid,f[i].fname,f[i].fprice,f[i].fcat);
		}
	
	}
}

void_exit(struct food f[])
{
	printf("\nExit");
}

int main()
{
	struct food f[5];
	int i,choice,sid,sprice,sfid;
	
	do
	{
		printf("\nEnter 1 for add food detail\nEnter 2 for display food detail");
		printf("\nEnter 3 for display price range between 100 to 500\nEnter 4 for Search food detail by using another cases");
		printf("\nEnter 5 for update the Detail\n");
		printf("Enter 6 for delete food detail\nEnter 7 for Exit\n");
		printf("\n\nEnter your choice:\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				for(i=0 ;i<5 ;i++)
				{
					printf("\nEnter food Id food name food price and food category:\n");
					scanf("%d%s%d%s",&f[i].fid,f[i].fname,&f[i].fprice,&f[i].fcat);
				}
			
			case 2:
				{
					void_displaydetail(f);
					break;
				}
				
			case 3:
				{
					void_pricerange(f);
					break;
				}
				
			case 4:
				{
					do
					{
						printf("\nEnter 1 for food Id\nEnter 2 for food name\nEnter 3 for food price\nEnter 4 for food category\n");
						printf("Enter 5 for update the food detail\nEnter 6 for delet food detail\n");
						printf("\nEnter the choice:");
						scanf("%d",&choice);
						
						switch(choice)
						{
							case 1:
								{
									printf("\nEnter the food search Id:");
									scanf("%d",&sid);
									void_searchid(f,sid);
									break;
								}
								
							case 2:
								{
									void_findname(f);
									break;
								}
								
							case 3:
								{
									printf("\nEnter the food search price:");
									scanf("%d",&sprice);
									void_findprice(f,sprice);
									break;
								}
								
							case 4:
								{
									void_findcategory(f);
									break;
								}
							
							default:
								printf("\nInvalid choice");								
						}
					}while(choice!=6);
					
					break;
			case 5: 
			    {
			    	do
					{
						printf("\nEnter 1 for update food by Id\nEnter 2 for update food by name\nEnter 3 update food by price\nEnter 4 for update food by category\n");
						printf("\nEnter the choice:");
						scanf("%d",&choice);
						
						switch(choice)
						{
							case 1:
								{
									printf("\nEnter the food search Id:");
									scanf("%d",&sfid);
									void_updatebyid(f,sfid);
									break;
								}							
							case 2:
								{
									void_updatebyname(f);
									break;
								}								
							case 3:
								{
									printf("\nEnter the food search price:");
									scanf("%d",&sprice);
									void_updatebyprice(f,sprice);
									break;
								}								
							case 4:
								{
									void_updatebycategory(f);
									break;
								}							
							default:
								printf("\nInvalid choice");								
						}
					}
					while(choice!=6);
					break;
			case 6:
			{
				do
				{
						printf("\nEnter 1 for delete food by Id\nEnter 2 for delete food by name\nEnter 3 for delete food by price\nEnter 4 for delete food by category\n");
						printf("\nEnter the choice:");
						scanf("%d",&choice);
						
						switch(choice)
						{
							case 1:
								{
									printf("\nEnter the food search Id:");
									scanf("%d",&sfid);
									void_deletebyid(f,sfid);
									break;
								}
								
							case 2:
								{
									void_deletebyname(f);
									break;
								}
								
							case 3:
								{
									printf("\nEnter the search food price: ");
									scanf("%d",&sprice);
									void_deletebyprice(f,sprice);
									break;
								}
								
							case 4:
								{
									void_deletebycategory(f);
									break;
								}
								
							default:
								printf("\nInvalud choice:");
						}
				}
				while(choice!=8);
				break;
				
			case 7:
				{
					void_exit(f);
					break;
				}
			}
			
			default:
				printf("\nInvalid choice");
			}
		}
	}
}
	while(choice!=10);	
	return 0;	
}

