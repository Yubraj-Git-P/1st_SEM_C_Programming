#include <stdio.h>
// Use of continue statement's:
int main (){
	
	int age;
	
	printf(" Enter your age :  ");
	scanf("%d",&age);
	
	
	switch(age)
	{
		
		case 1 : 
		       printf(" Younger ");
		          break;
		
		case 2 :  
		        printf(" Older");
		          break;
		          
		case 3 :  
		        printf(" middle ");
		          break;
		
		case 4 : 
		        printf(" child ");
		          break;
	
	    default : 
		        b5hprintf(" Nothoing");
	              break;
    }
    
     return 0;
}

