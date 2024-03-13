#include <stdio.h>
int main() 
{
    FILE *fp;
    int number=10;

    fp = fopen("E:\\Giris Tech Hub\\File Handling\\fp\\demo1.txt", "w");
    
 	printf("Enter a number (1 to 10): ");
    for (int i=0; i<10; ++i) 
	{
        scanf("%d", &number);
        fprintf(fp, "%d\n", number);
    }

        
    
    printf("Data added successfully to the file.\n");

    fclose(fp);

    return 0;
}

