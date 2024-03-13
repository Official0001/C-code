#include<stdio.h>
int main()
{
	char ch ;
	int qty,gst=0,g=0;
	
	printf("\t*********Menu*********\n\n");
	printf("Do you want to Pizza then press : P \n");
	printf("Do you want to French Fries then press : F \n");
	printf("Do you want to Burger then press : B \n");
	printf("Do you want to Patties then press : p \n");
	printf("Do you want to Sandwich then press : S \n");
	

	printf("\nEnter code of Fast food : ");
	scanf("%c",&ch);
	
	printf("Enter The Quantity : ");
	scanf("%d",&qty);
	
	(ch=='P') ? printf("Total Bill of pizza's With GST : %d \n  Without GST : %d",gst =g+((250*qty)*18)/100 , g=(250*qty)):
	(ch=='F') ? printf("Total Bill of French Fries With : GST %d \n  Without GST : %d",gst =g+((80*qty)*18)/100 , g=(80*qty)):
	(ch=='B') ? printf("Total Bill of Burger With GST : %d \n  Without GST : %d",gst =g+((110*qty)*18)/100 , g=(110*qty)):
	(ch=='p') ? printf("Total Bill of Patties With GST : %d \n  Without GST : %d",gst =g+((25*qty)*18)/100 , g=(25*qty)):
	(ch=='S') ? printf("Total Bill of Sandwich With GST : %d \n  Without GST : %d",gst =g+((50*qty)*18)/100 , g=(50*qty)):
	printf("INVALID CODE");
		
	return 0;
}
