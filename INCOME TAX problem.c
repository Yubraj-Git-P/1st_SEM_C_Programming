#include <stdio.h>
/*   Calculate the income tax paid by the employee to the government as per the slabs mention*/
//  income slab   Tax:
   // 2.5 - 5 l    5%
    //5.o- 10.l    20%
    //Above 10l    30%

    //note there is no TAX below 2.5l take income from user.

int main ()
{    

    int income;
    
    printf("Enter your income: ");
    scanf("%d",&income);
    
    // (income)*5/100
    if(income>=250000 && income<500000){
    	
    	printf("You must have to pay tax of %5 which is in Rupes is %d ",(income*5)/100);
	} 
    else if(income>=500000 && income<=1000000){
    	
    	printf("You must have to pay tax of 20 percent which is in Rupes is %d",(income*20)/100);
	}	
    else if(income>1000000){
    	
    	printf("You must have to pay Tax of 30 percent which is in Rupes id %d",(income*30)/100);
	} else {
		printf("NO Tax below 250000");
	}
    
	return 0;
}
