#include <stdio.h>

int main() {
    int units;
    float charges, surcharge, totalBill;

    printf("Enter Total units consumed: ");
    scanf("%d", &units);

    if(units<=50) 
        charges = units*0.50;
        
    else if(units<=150) 
        charges = (50*0.50) + ((units - 50) * 0.75);
        
    else if(units<=250) 
        charges = (50*0.50) + (100*0.75) + ((units - 150)*1.20);
        
    else 
        charges = (50*0.50) + (100*0.75) + (100*1.20) +((units - 250)*1.50);
    
    surcharge = 0.20*charges;

    totalBill = charges+surcharge;

    printf("Total Electricity Charges: %.2f\n", charges);
    printf("Surcharge 20% : %.2f\n", surcharge);
    printf("Total Electricity Bill: %.2f\n", totalBill);

    return 0;
}

