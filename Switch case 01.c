#include <stdio.h>
//write a program which found your rank according to you marks gain.
   // Using switch case. 
int main ()  
{   
    int marks,age;
    
	printf("Enter your marks : ");
	scanf("%d",&marks);
	
	printf("Enter your age : ");
	scanf("%d",&age);
	
	switch(marks){
		
		case 23 : printf("you are fourth \n");
		
		switch(age){
			
			case 1 : printf("and also excellent");
			break;
			
			case 2: printf("and Good");
			break;
			
			case 3: printf("and nice");
			break;
			
			default: printf("you are nothing ");
			break;
		}
		break;
		
		case 30 : printf("your are third \n");
		
		switch(age){
			
			case 1: printf(" and excellent");
			break;
			
			case 2: printf(" and Good");
			break;
			
			case 3: printf("and nice ");
			break;
			
			default : printf("you are nothing");
			break;
		}
		break;
		
		case 35 : printf("you are second \n");
		
		switch(age){
			
			case  1: printf(" and excellent");
			break;
			
			case 2: printf("and Good ");
			break;
			
			case 3: printf("and nice");
			break;
			
			default: printf("you are nothing");
			break;
			
			
		}
		break;
		
		case 40 : printf("you are first \n");
		switch(age){
			
		    case 1: printf("and excellent");
		    break;
		    
		    case 2: printf("and Good");
		    break;
		    
		    case 3: printf("and nice");
		    break;
		    
		    default : printf("you are nothing");
		    break;
		}
		break;
		
		default : printf("you are fail \n");
		
		switch(age){
			
			case 10: printf("Tentheen");
			break;
			
			case 20: printf("twenteenth");
			break;
			
			case 30: printf("Thirtheeth");
			break;
			
			default : printf("Huge amoutn");
			
		}
		
		
	}
	  

	return 0;
}
