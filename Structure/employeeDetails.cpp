#include<stdio.h>
#include<string.h>

struct employee{
	int eId;
	char eName[10],eMail[20];
	long int eContact;
	int eSalary;
};

void addEmployee(struct employee e[], int index) {
    printf("\nEnter Employee Details:\n");
    printf("Employee ID: ");
    scanf("%d", &e[index].eId);
    printf("Employee Name: ");
    scanf("%s", e[index].eName);
    printf("Employee Email: ");
    scanf("%s", e[index].eMail);
    printf("Employee Contact: ");
    scanf("%ld", &e[index].eContact);
    printf("Employee Salary: ");
    scanf("%d", &e[index].eSalary);
}


void Display(struct employee e[])
{
	printf("\nDispaly Employee ID Name Email EmpContact EmpSalary\n");
	for(int i=0; i<4; i++)
	{
		printf("\n%d\t%s\t%s\t%ld\t%d",e[i].eId,e[i].eName,e[i].eMail,e[i].eContact,e[i].eSalary);
	}
}

void searchId(struct employee e[],int sId)
{
	int flag=0;
	printf("\nDispaly Employee ID Name Email EmpContact EmpSalary\n");
	for(int i=0; i<4; i++)
	{
		if(e[i].eId == sId)
		{
			flag=1;	
			printf("\n%d\t%s\t%s\t%ld\t%d",e[i].eId,e[i].eName,e[i].eMail,e[i].eContact,e[i].eSalary);
			break;
		}
	}
	if(flag)
	printf("\nEmployee ID Found");
	else
	printf("\nEmployee ID Not Found");
}


void updateDetail(struct employee e[])
{
	char name[20];
	int i,flag=0,s;
	printf("Enter Name to be Searched: ");
	scanf("%s",&name);
	
	for(i=0; i<4; i++)
	{
		s = strcmp(name,e[i].eName);
		if(s==0)
		{
			printf("\nUpdate deatils of this Employee");
			scanf("\n%d\t%s\t%s\t%ld\t%d",&e[i].eId,&e[i].eName,&e[i].eMail,&e[i].eContact,&e[i].eSalary);	
			flag=1;
			break;
		}	
	} 
	if(flag==0)
	printf("No Record Found");
	else{
		printf("\nDisplay After update the Record : ");
		for(i=0; i<4; i++)
		{
			printf("\n%d\t%s\t%s\t%ld\t%d",e[i].eId,e[i].eName,e[i].eMail,e[i].eContact,e[i].eSalary);
		}
	}
}


void deleteDetail(struct employee e[])
{
	char sEmail[20];
	int i;
	int flag=0,f;
	printf("Enter Email to be Searched : ");
	scanf("%s",&sEmail);
	
	for(i=0; i<4; i++)
	{
		f = strcmp(sEmail,e[i].eMail);
		if(f==0)
		{
			for(int j=1;j<4;j++)
			{
				e[j] = e[j+1];
				flag=1;
			}
		}
	}
	if(flag==0)
	printf("\nEmail not Found");
	else
	{
		printf("\nDisplay After update the record : ");
		for(i=0; i<(4-flag); i++)
		{
			printf("\n%d\t%s\t%s\t%ld\t%d",e[i].eId,e[i].eName,e[i].eMail,e[i].eContact,e[i].eSalary);
		}
	}
}


void countEmployee(struct employee e[])
{
	int i, count=0;
	for(int i=0;i<4;i++)
	{
		printf("\n%d\t%s\t%s\t%ld\t%d",e[i].eId,e[i].eName,e[i].eMail,e[i].eContact,e[i].eSalary);
		count++;
	}
	printf("\n\n%d employee in the Company",count);
}


void ascendingOrder(struct employee e[],struct employee temp)
{
	for(int i=0;i<4;i++)
	{
		for(int j=i+1; j<4; j++)
		{
			if(e[i].eSalary<e[j].eSalary)
			{
				temp = e[i];
				e[i] = e[j];
				e[j] = temp;
			}
		}
	}
	printf("\nThe ascending order of Employee Salary is: \n");
	for(int i=0;i<4;i++)
	{
		printf("\n%d\t%s\t%s\t%ld\t%d",e[i].eId,e[i].eName,e[i].eMail,e[i].eContact,e[i].eSalary);
	}
}


void highestSalary(struct employee e[])
{
	int max1=0,max=0;
	for(int i=0;i<4;i++)
	{
		if(max>e[i].eSalary)
		{
			max1=e[i].eSalary;
			max=i;
		}
	}
	printf("\n%d\t%s\t%s\t%ld\t%d",e[max].eId,e[max].eName,e[max].eMail,e[max].eContact,e[max].eSalary);
}


void maxMin(struct employee e[])
{
	printf("\nthe Employee details in Min salary is 10000 to max salary is 60000\n");
	for(int i=0;i<4;i++)
	{
		if(10000>=e[i]eSalary && 60000<=e[i].eSalary)
		{
			printf("\n%d\t%s\t%s\t%ld\t%d",e[i].eId,e[i].eName,e[i].eMail,e[i].eContact,e[i].eSalary);
		}
	}
}


void exit(struct employee e[])
{
	printf("\nEXIT");
}


int main()
{
	struct employee e[4],temp;
	int ch,flag=0,i;
	int sId;
	char sName[20]
	
	do{
	
	printf("MENU\n");
	printf("1.Add Employee Details/n");
	printf("2.Display All Employee Details/n");
	printf("3.Search Employee Details By ID then employee is found or Not/n");
	printf("4.Update Employee Details by Name/n");	
	printf("5.Delete Employee Details by Email/n");
	printf("6.Display list count of the employee in company\n");
	printf("7.Display list employee in the ascending order of employee salary\n");
	printf("8.Display the employee details with highest salary\n");
	printf("9.Display the employee details in minimum salary is 10000 to maximum salary is 60000\n");
	printf("EXIT");
	
	printf("Enter the operation do you want to perform : ");
	scanf("%d",ch);
	
    switch(ch) {
            case 1:
                if(index<4) {
                    addEmployee(e, index);
                    index++;
                } else {
                    printf("Employee database is full. Cannot add more employees.\n");
                }
                break;

            case 2:
                Display(e);
                break;

            case 3:
                printf("Enter the Employee ID to search: ");
                scanf("%d", &sId);
                searchId(e, sId);
                break;

            case 4:
                updateDetail(e);
                break;

            case 5:
                deleteDetail(e);
                break;

            case 6:
                countEmployee(e);
                break;

            case 7:
                ascendingOrder(e, temp);
                break;

            case 8:
                highestSalary(e);
                break;

            case 9:
                maxMin(e);
                break;

            case 10:
                printf("EXIT\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }while(ch!=10);

    return 0;
}

