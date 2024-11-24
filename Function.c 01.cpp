#include <stdio.h>
// About functions
void display(); // Function Prototype.  
int main () {
	/*
	 sometimes our programmes get bigger in size and it is not possible for a 
	 programmer to track which piece of code is doing what 
	 so funCtion is a way to break out code into pieces so that it is possible 
	 for a programmer to re use them
	 
	 What is a function ?
	 A function basically a block of code which performs a particular task
	 
	 a function can be used by the programmer in a given no of times.
	 
	and here is the example or syntax for using the FUNCTIONS :
	
	void display (); function prototype.
	int main (){
	
	   display(); function call.
	   
	   return 0;
	      
    }
    
    void display () {   function definition 
              program executed here. all the code run here.
    }
	
	1). function prototype is a way to tell a compilier about the function
	that we are going to define in the program.
	note void = indicates that the function doesnot return anything.
	
	2). Function call is place where the the execution of the programming is 
	done function call is a way to tell a  compilier at the time the call ismade
	
	function call is the way to tell the compilier which executes the value
	inside the function defination.
	
	The program execution starts from the main function in the sequence order

	3). At last function defination this part contains the exact set of
	instructions which are executed during the function call when a function
	 is called from main (): function falls ashleep; and gets temporarily suspen
	  
	   here is the full summary:
	  here 
	  Void display(); which is used to tell the compilier which type of 
	  function is going to be used in the programs.
	  
	  display(); which is used run or execute the values or any loop 
	  mentioned in the function definations.
	  
	  and at last : Function defination : at this point we should executer the 
	  code inside the function defination and hence goes to the display();
	  
	  hence, first from main function the code is run in a sequence 
	  where the program starts.  
	*/
	
	int a = 20;
	int b = 10;
	
	printf(" Here the value of a+b is %d\n",a+b);
	//printf(" Here the value of a-b is %d\n",a-b);
	display();
	//printf("  value of 2*a is %d\n",2*a);
	printf(" value of 2*b is %d\n",2*b);

	return 0;
}
 void display(){
 	printf(" value of a*b is %d\n thaxaina");
 }




