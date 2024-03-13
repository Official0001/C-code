#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Product{
    int id;
    char name[50];
    int salary;
};

int main() {
    int num;
    printf("Enter the number of products: ");
    scanf("%d",&num);

    struct Product *products = (struct Product*)malloc(num * sizeof(struct Product));

    for(int i=0; i<num; i++) {
        printf("\nEnter details for product %d:\n", i+1);
        printf("ID: ");
        scanf("%d",&products[i].id);
        printf("Name: ");
        scanf("%s",products[i].name);
        printf("Salary: ");
        scanf("%d",&products[i].salary);
    }

    int temp;
    for(int i=0;i<num;i++) 
	{
        for(int j=i+1;j<num;j++) 
		{
            if(products[i].salary < products[j].salary) 
			{
                temp = products[i].salary;
                products[i].salary = products[j].salary;
                products[j].salary = temp;

//                temp = products[i].id;
//                products[i].id = products[j].id;
//                products[j].id = temp;
//
//                char tempName[50];
//                strcpy(tempName, products[i].name);
//                strcpy(products[i].name, products[j].name);
//                strcpy(products[j].name, 
            }
        }
    }
    printf("\nProducts in Descending order based on salary:\n");
    printf("ID\tName\tSalary\n");
    printf("---------------------------------------\n");
    for(int i=0;i<num;i++) 
	{
		printf("%d\t%s\t%d\n",products[i].id, products[i].name, products[i].salary);
    }

    free(products);

    return 0;
}

