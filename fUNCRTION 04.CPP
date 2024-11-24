// NOte the most important point Function defined can be indirectly and directly 
// called by the main function's 
#include <stdio.h>
// write three funcions to print good morning, afternoon,and night.
void Goodmorning();// Function prototype
void Goodafternoon();// Function prototype
void Goodnight();// Function prototype
// functio prototype helps to define which type of function is going to be used
int main () 

{   
      Goodmorning (); // Function call 
      //Goodafternoon ();// Function call
      //Goodnight ();// Function call
	// function call helps use to execute the code printed inside the Functio definition 
	return 0;
}
void Goodmorning (){ // Function definition 
	printf(" Good morning baby \n");
	Goodafternoon();
}
void Goodafternoon () { // Function definiton
	printf(" Good afternoon janu \n ");
	Goodnight();
}
void Goodnight () { // function definition
	printf(" Good night Hency \n");
}// Function definition helps use to break the code and execute the code inside it.
