#include<stdio.h>
#include<string.h>
struct Book 
{
	int bid,bprice;
	char name[20],author[20],publication[20];
};

void_displaybookdetail(struct Book b[])
{
	int i;
	printf("\nDisplay Book detail:");
	for(i=0 ;i<4;i++)
	{
		printf("\n%d\t%s\t%d\t%s\t%s",b[i].bid,b[i].name,b[i].bprice,b[i].author,b[i].publication);		
	}
}

void_pricerange(struct Book b[])
{
	int i;
	printf("\n Display whoes price range in between 100 to 500");
	for(i=0 ;i<4 ;i++)
	{
		if(b[i].bprice>=100 && b[i].bprice<=500)
		{
			printf("\n%d\t%s\t%d\t%s\t%s",b[i].bid,b[i].name,b[i].bprice,b[i].author,b[i].publication);
		}
	}
}

void_searchbyid(struct Book b[],int sid)
{
	int flag=0;
	printf("\nDisplay food Id food name food price and food category:\n");
	printf("\nFood Id\tFood Name\t price\t categ");
	for( int i=0 ;i<5 ;i++)
	{
		
		if(b[i].bid==sid)
		{
			flag=1;
			printf("\n%d\t%s\t%d\t%s\t%s",b[i].bid,b[i].name,b[i].bprice,b[i].author,b[i].publication);
			break;
		}
							
	}
	if(flag)
	{
		printf("\n\nBook Id found");
	}
	else
	{
		printf("\nBook id not found");
	}
}

void_searchbookname(struct Book b[])
{
	char sname[20];
	int i,flag=0,s;
	
	
	printf("\nEnter Book name to be searched:");
	scanf("%s",&sname);
	
	for(i=0 ;i<4;i++)
	{
		s=strcmp(sname,b[i].name);
		if(s==0)
		{
			printf("\n%d\t%s\t%d\t%s\t%s",b[i].bid,b[i].name,b[i].bprice,b[i].author,b[i].publication);
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("\n\nBook Name found");
	}
	else
	{
		printf("\nBook Name not found");
	}
	 	
}

void_Searchbyprice(struct Book b[],int sprice)
{
	int flag=0;
	printf("\nDisplay book detail:\n");
	
	for( int i=0 ;i<4 ;i++)
	{
		
		if(b[i].bprice==sprice)
		{
			flag=1;
			printf("\n%d\t%s\t%d\t%s\t%s",b[i].bid,b[i].name,b[i].bprice,b[i].author,b[i].publication);
			break;
		}
							
	}
	if(flag)
	{
		printf("\n\nBook Detail found");
	}
	else
	{
		printf("\nBook detail not found");
	}
}

void_searchbyauthor(struct Book b[])
{
	char sname[20];
	int i,flag=0,s;
	
	
	printf("\nEnter Book name to be searched:");
	scanf("%s",&sname);
	
	for(i=0 ;i<4;i++)
	{
		s=strcmp(sname,b[i].author);
		if(s==0)
		{
			printf("\n%d\t%s\t%d\t%s\t%s",b[i].bid,b[i].name,b[i].bprice,b[i].author,b[i].publication);
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("\n\nBook  found");
	}
	else
	{
		printf("\nBook  not found");
	}
	 	
}

void_updatebyid(struct Book b[],int sbid)
{

	int flag=0;
	
	for(int i=0 ;i<4;i++)
	{
	
		if(b[i].bid==sbid)
		{
			printf("\nUpdate detail of this book:");
			scanf("%d%s%d%s%s",&b[i].bid,b[i].name,&b[i].bprice,b[i].author,b[i].publication);
			flag=1;
			break;
		}
	}
	 if(flag==0)
	{
		printf("\nNo update Id found");
	}
	else
	{
		printf("\nDisplay after update the Detail:");
	
		for(int i=0 ;i<4;i++)
		{
			printf("\n%d\t%s\t%d\t%s\t%s",b[i].bid,b[i].name,b[i].bprice,b[i].author,b[i].publication);
		}
	}
	
}

void_updatebyname(struct Book b[])
{
	char sname[20];
	int i,flag=0,s;
	
	
	printf("\nEnter name to be searched:");
	scanf("%s",&sname);
	
	for(i=0 ;i<5;i++)
	{
		s=strcmp(sname,b[i].name);
		if(s==0)
		{
			printf("\nUpdate detail of this Book:");
			scanf("%d%s%d%s%s",&b[i].bid,b[i].name,&b[i].bprice,b[i].author,b[i].publication);
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
		for(i=0 ;i<4;i++)
		{
			printf("\n%d\t%s\t%d\t%s\t%s",b[i].bid,b[i].name,b[i].bprice,b[i].author,b[i].publication);
		}
	}
	
}

void_updatebyprice(struct Book b[],int sprice)
{

	int flag=0;	
	for(int i=0 ;i<4;i++)
	{
	
		if(b[i].bprice==sprice)
		{
			printf("\nUpdate detail of this Book:");
			scanf("%d%s%d%s%s",&b[i].bid,b[i].name,&b[i].bprice,b[i].author,b[i].publication);
			flag=1;
			break;
		}
	}
	 if(flag==0)
	{
		printf("\nNo Book found");
	}
	else
	{
		printf("\nDisplay after update the Detail:");
	
		for(int i=0 ;i<4;i++)
		{
			printf("\n%d\t%s\t%d\t%s\t%s",b[i].bid,b[i].name,b[i].bprice,b[i].author,b[i].publication);
		}
	}
	
}
void_updatebypublication(struct Book b[])
{
	char sname[20];
	int i,flag=0,s;
	
	
	printf("\nEnter name to be searched:");
	scanf("%s",&sname);
	
	for(i=0 ;i<5;i++)
	{
		s=strcmp(sname,b[i].publication);
		if(s==0)
		{
			printf("\nUpdate detail of this Book:");
			scanf("%d%s%d%s%s",&b[i].bid,b[i].name,&b[i].bprice,b[i].author,b[i].publication);
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
		for(i=0 ;i<4;i++)
		{
			printf("\n%d\t%s\t%d\t%s\t%s",b[i].bid,b[i].name,b[i].bprice,b[i].author,b[i].publication);
		}
	}
	
}

void_deletebyid(struct Book b[],int sbid)
{
	int i;
	int flag=0;	
	//f=strcmp(semail,e[i].email);
	for(i=0;i<4;i++)
	{
		if(b[i].bid==sbid)
		{
			
		    for(int j=i;j<4;j++)
			{
				b[j]=b[j+1];
				flag=1;				
			}	
		}
	}
	 if(flag==0)
	{
		printf("\nBook not found");	
	}
	else
	{
		printf("\nDisplay after Delete the Detail:\n");
		
		for(i=0;i<(4-flag);i++)
		{
			printf("\n%d\t%s\t%d\t%s\t%s",b[i].bid,b[i].name,b[i].bprice,b[i].author,b[i].publication);
		}
	
	}
}

void_deletebyname(struct Book b[])
{
	char sname[20];
	int i,flag=0,s;	
	printf("\nEnter name to be searched:");
	scanf("%s",&sname);
	
	for(i=0;i<4;i++)
	{
		s=strcmp(sname,b[i].name);
		if(s==0)
		{
			
		    for(int j=i;j<4;j++)
			{
				b[j]=b[j+1];
				flag=1;				
			}	
		}
	}
	 if(flag==0)
	{
		printf("\nBook not found");	
	}
	else
	{
		printf("\nDisplay after Delete the Detail:\n");
		
		for(i=0;i<(4-flag);i++)
		{
			printf("\n%d\t%s\t%d\t%s\t%s",b[i].bid,b[i].name,b[i].bprice,b[i].author,b[i].publication);
		}
	
	}
}

void_deletebyprice(struct Book b[],int sbprice)
{
	int i;
	int flag=0;	
	//f=strcmp(semail,e[i].email);
	for(i=0;i<4;i++)
	{
		if(b[i].bprice==sbprice)
		{
			
		    for(int j=i;j<4;j++)
			{
				b[j]=b[j+1];
				flag=1;				
			}	
		}
	}
	 if(flag==0)
	{
		printf("\nBook not found");	
	}
	else
	{
		printf("\nDisplay after Delete the Detail:\n");
		
		for(i=0;i<(4-flag);i++)
		{
			printf("\n%d\t%s\t%d\t%s\t%s",b[i].bid,b[i].name,b[i].bprice,b[i].author,b[i].publication);
		}
	
	}
}
void_deletebypublication(struct Book b[])
{
	char sname[20];
	int i,flag=0,s;	
	printf("\nEnter name to be searched:");
	scanf("%s",&sname);
	
	for(i=0;i<4;i++)
	{
		s=strcmp(sname,b[i].publication);
		if(s==0)
		{
			
		    for(int j=i;j<4;j++)
			{
				b[j]=b[j+1];
				flag=1;				
			}	
		}
	}
	 if(flag==0)
	 {
	 
		printf("\nBook not found");	
	}
	else
	{
		printf("\nDisplay after Delete the Detail:\n");
		
		for(i=0;i<(4-flag);i++)
		{
			printf("\n%d\t%s\t%d\t%s\t%s",b[i].bid,b[i].name,b[i].bprice,b[i].author,b[i].publication);
		}
	
	}
}
void_deletebyauthor(struct Book b[])
{
	char sname[20];
	int i,flag=0,s;	
	printf("\nEnter name to be searched:");
	scanf("%s",&sname);
	
	for(i=0;i<4;i++)
	{
		s=strcmp(sname,b[i].author);
		if(s==0)
		{
			
		    for(int j=i;j<4;j++)
			{
				b[j]=b[j+1];
				flag=1;				
			}	
		}
	}
	 if(flag==0)
	{
		printf("\nBook not found");	
	}
	else
	{
		printf("\nDisplay after Delete the Detail:\n");
		
		for(i=0;i<(4-flag);i++)
		{
			printf("\n%d\t%s\t%d\t%s\t%s",b[i].bid,b[i].name,b[i].bprice,b[i].author,b[i].publication);
		}
	
	}
}

int main()
{
	struct Book b[4];
	int i,choice,sid,sprice,sbid,sbprice;
	
	do
	{
		printf("\nEnter 1 for add book detail\nEnter 2 for display book detail\nEnter 3 for price range between 100 to 500\n");
		
		printf("\nEnter the choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				{
														
					for(i=0 ;i<4 ;i++)
					{
						printf("\nEnter the book id book name price author and publication:");
						scanf("%d%s%d%s%s",&b[i].bid,b[i].name,&b[i].bprice,b[i].author,b[i].publication);
					}
				}
			case 2:
				{
					void_displaybookdetail(b);
					break;
				}
			case 3:
				{
					void_pricerange(b);
					break;
				}
			case 4:
				{
					do
					{
						printf("\nEnter 1 Search book detail by using Book Id\nEnter 2 for sesrch book detsil by using book name");
						printf("\nEnter 3 for search book detail by using book price\nEnter 4 for search book detail by using book author\n");
						printf("\n");
						
						printf("\nEnter your choice");
						scanf("%d",&choice);
						
						switch(choice)
						{
							case 1:
								{
									printf("\nEnter the search Id:");
									scanf("%d",&sid);
									void_searchbyid(b,sid);
									break;
								}
							case 2:
								{
									void_searchbookname(b);
									break;
								}
								
							case 3:
								{
									printf("\nEnter the search price:");
									scanf("%d",&sprice);
									void_Searchbyprice(b,sprice);
									break;
								}
							case 4:
								{
									void_searchbyauthor(b);
									break;
								}
								
							default:
								printf("\nInvlaid choice");
				
						}
					}
					while(choice!=5);
					
				}
			case 5:
				{
					do
					{
						printf("\nEnter 1 for update book detail by Id\nEnter 2 for update book detail by name");
						printf("\nEnter 3 for update book detail by price\nEnter 4 for update book detail by publication");
						printf("\n");
						printf("\nEnter your choice:");
						scanf("%d",&choice);
						
						switch(choice)
						{
							case 1:
								{
									printf("\nEnter the search Id:");
									scanf("%d",&sbid);
									void_updatebyid(b,sbid);
									break;
								}
								
							case 2:
								{
									void_updatebyname(b);
									break;
								}
								
							case 3:
								{
									printf("\nEnter the search price:");
									scanf("%d",&sprice);
									void_updatebyprice(b,sprice);
									break;
								}
							case 4:
								{
									void_updatebypublication(b);
								}
								
							default:
								printf("\nInvalid choice");
								
						}
					}
					while(choice!=5);
				}
			case 6:
				{
					do
					{
						printf("\nEnter 1 delete book detail by Id\nEnter 2 delete book detail by name");
						printf("\nEnter 3 delete book detail by price\nEnter 4 delete book detail by publication");
						printf("\nEnter 1 delete book detail by author");
						printf("\n");
						
						printf("Enter your choice:");
						scanf("%d",&choice);
						
						switch(choice)
						{
							case 1:
								{
									printf("\nEnter the search Id:");
									scanf("%d",&sbid);
									void_deletebyid(b,sbid);
									break;
								}
							case 2:
								{
									void_deletebyname(b);
									break;
								}
								
							case 3:
								{
									printf("\nEnter the book price:");
									scanf("%d",&sbprice);
									void_deletebyprice(b,sbprice);
									break;
								}
							case 4:
								{
									void_deletebypublication(b);
									break;
								}
							case 5:
								{
									void_deletebyauthor(b);
									break;
								}
							default:
								printf("\nInvalid choice");
						}
					}
					while(choice!=6);
				}
			case 7:
				{
					do
					{
						printf("\nEnter 1 for count book detail by id\nEnter 2 for count book detail by name");
						printf("\nEnter 3 for count book detail by price\nEnter 4 for count book detail by publication");
						printf("\nEnter 5 for count book detail by author");
						printf("\n");
						
						printf("\nEnter your choice:");
						scanf("%d",&choice);
						
						switch(choice)
						{
							case 1:
								{
								
									break;
								}
								
							default:
								printf("\nInvalid choice");
						}
					}
					while(choice!=5);
				}
			default:
				printf("\nInvalid choice");
		}
	}
	while(choice!=7);
	return 0;
}
