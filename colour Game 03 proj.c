#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Couur gaming .c
int main () {
	
	int colour;
	int Gcolour;
	int Gctimes = 1;
	
	srand(time(0));
	colour = rand() % 10 + 1;
	
	//printf(" Enter your colour : \n");
	//scanf("%d",&colour);
			
	/*switch(colour) {
		
		case 1 : 
		      printf(" RED ");
		        break;
		
		case 2 : 
		      printf(" BLUE ");
		        break;
		
		case 3 : 
		      printf(" YELLOW ");
		        break;
		
		case 4 : 
		      printf(" WHITE ");
		        break;
		
		case 5 : 
		      printf(" BLACK ");
		        break;
		
		case 6 : 
		       printf(" BROWN ");
		       break;
		       
		case 7 : 
                printf(" PINK ");
				break;
						
		case 8 :
			    printf(" PURPLE ");
			    break;
			    
	    case 9 : 
	            printf(" Orange ");
	            break;
	            
		case 10 :printf(" Rose ");
		        break;
		        
		default :
		      printf(" Nothing colour ");
		        break;*/ 
		        
		do{
			
			printf(" Enter your guessing colour: ");
			scanf("%d",&Gcolour);
			
			if(Gcolour>colour){
			
			printf("-----------------------Its Higher number colour \n ");
			
		   } else if(Gcolour<colour) {
			
		   printf("----------------------Its LOwer number colour \n");
			
		   } else {
			
		   printf("You have guess the colour in %d times",Gctimes);
			
		} Gctimes++;
		
		
		switch(colour) {
		
		case 1 : 
		      printf(" RED ");
		        break;
		
		case 2 : 
		      printf(" BLUE ");
		        break;
		
		case 3 : 
		      printf(" YELLOW ");
		        break;
		
		case 4 : 
		      printf(" WHITE ");
		        break;
		
		case 5 : 
		      printf(" BLACK ");
		        break;
		
		case 6 : 
		       printf(" BROWN ");
		       break;
		       
		case 7 : 
                printf(" PINK ");
				break;
						
		case 8 :
			    printf(" PURPLE ");
			    break;
			    
	    case 9 : 
	            printf(" Orange ");
	            break;
	            
		case 10 :printf(" Rose ");
		        break;
		        
		default :
		      printf(" Nothing colour ");
		        break; 
		        
		} while(Gctimes!=Gcolour);        
		
}
	
	return 0;
}
