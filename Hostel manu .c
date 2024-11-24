#include <stdio.h>
// Write a program which find tells food items in a hostel according to weekly days. 
int main ()

{
	int sunday=1,monday=2,tuesday=3,wenesday=4,thurday=5,friday=6,saturday=7;
	int day;
	
	printf("Enter your day : ");
	scanf("%d",&day);
	
	switch(sunday) {
	
	    case 1: printf("cabbage in breakfast");
		        printf("mutton in dinner");
		        
		case 2: printf("potato soup in breakfast ");
		        printf("chicken dinner ");
				
		case 3: printf("vegetable soup in breakfast");
		        printf(" buff dinner ");
				
		case 4: printf("panner soup in breakfast ");
		        printf("deer dinner today ");
				
		case 5: printf("momo in breakfast ");
		        printf(" burger dinner");
				
		case 6: printf(" sauces in breakfast");
		        printf(" sandwitch dinner ");
				
		case 7: printf(" dal chawak in breakfast ");
		        printf(" murgi ponditure dinner");
				
		default : 
		           printf("invalid date");												        
	}
	
	return 0;
}
