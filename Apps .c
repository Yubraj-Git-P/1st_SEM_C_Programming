#include<stdio.h>
// Switch case control statement :
int main() {
	
	int a;
	
	printf(" Enter the value of a : ");
	scanf("%d",&a);
    
    switch(a){
    	
    	case 1 : 
    	         printf("You are looking handsome");
    	         break;
    	         
    	case 2 : 
    	         printf("You are looking beautiful");
    	         break;
    	case 3 : 
    	         printf("You are looking smart ");
    	        break;
    	case 4 : 
    	         printf("You are looking beautiful smart");
    	         break;
    	case 5 : 
                 printf("You are looking cool");
                 break;
        case 6 : 
                 printf("You are looking beautiful cool");
                 break;
                 
    	default :{ 
    	      printf("You are nothing");
			break;
		}
		

	}

	return 0;
}
