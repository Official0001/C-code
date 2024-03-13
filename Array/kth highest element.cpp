#include<stdio.h>
#include<conio.h>
main()
{
	int size=5;
  	int a[size],k,j,temp,count=1,i;
  
     printf("\n Enter elements In Array");
     for(i=0;i<size;i++)
     {
	  scanf("%d",&a[i]);
     }
  
    for(i=0;i<size;i++)
    {
	 for(j=i+1;j<size;j++)
	 {
	   if(a[i]<a[j])
	   {
	      temp=a[i];
	      a[i]=a[j];
	      a[j]=temp;
	   }
	 }
    }
    
    printf("\n Which largest element you want to display");
    scanf("%d",&k);
   	for(i=0;i<size;i++)
   	{
      if(count==k)
      {
	  	printf("\n %d Largest Elements is %d",k,a[i]);
		break;
      }
      if(a[i]!=a[i+1])
	    count++;
   }

return 0; 
}




