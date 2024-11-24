#include <stdio.h>
// Write a program which decalar string value :
int main ()

{
    char string[] = {'C','O','M','P','U','T','E','R','\0'};
    //an string is an one day character array which is teminated by an null value called zero.
    printf("First letter is %c\n",string[0]);
	printf("second letter is %c\n",string[1]);
	printf("third letter is %c\n",string[2]);
	printf("fourth letter is %c\n",string[3]);
	printf("fifth letter is %c\n",string[4]);
	printf("sixth letter is %c\n",string[5]);
	printf("seventh letter is %c\n",string[6]);
	printf("eighth letter is %c\n",string[7]);
	
	printf("\n");
	
	char str[] = "PROGRAMM";// Shortest method for determining an array :
	// Here this is the best method and shortest method to decalare an arrays :
	// NOTE : in this shortest method this string value added an null character inside it automatically
	// NOTE automatically null is placed in this type of decalaration type.
	
	printf("First letter is %c\n",str[0]);
	printf("sec letter is %c\n",str[1]);
	printf("third letter is %c\n",str[2]);
	printf("fourth letter is %c\n",str[3]);
	printf("fifth letter is %c\n",str[4]);
	printf("sixth letter is %c\n",str[5]);
	printf("seventh letter is %c\n",str[6]);
	printf("ninth letter is %c\n",str[7]);
	
	printf("\n");

    char mom[] = "MINADAMINI";
    // This program is done by writtening the concepts of an loops.
    for(int i = 0; i<10; i++)
    {
    	printf("The %d no character is %c\n",i,mom[i]);
	}
    
    printf("\n");
    
    char dad[] = {'D','A','l','B','A','H','A','D','U','R','\0'};
    // This program is done by writtening the concepts of an loops.
    
    for(int x = 0; x<10; x++)
    {
    	printf(" The %d no of character is %c\n",x,dad[x]);
	}
	
	// Note taking an inputs from the user :
    // First simply:
    
   char run[5];
    
    printf("Enter the value of zero run :\n");
    scanf("%s",&run[0]);
    //For taking string array we have to use %s
    printf("Enter the value of first run :\n");
    scanf("%s",&run[1]);
    // For taking string array as an input we have to use %s
    printf("Enter the value of sec run :\n");
    scanf("%s",&run[2]);
    // For taking string array as an input we have to use %s
    printf("Enter the value of third run :\n");
    scanf("%s",&run[3]);
    // For taking string array as an input we have to use %s
    printf("Enter the value of fourth run :\n");
    scanf("%s",&run[4]);
    // For takng string array as an input we have to use %s
 
    printf("first arr is %c\n",run[0]); 
    printf("sec arr is %c\n",run[1]);
    printf("third arr is %c\n",run[2]);
    printf("fourth arr is %c\n",run[3]);
    printf("fifth arr is %c\n",run[4]);
    
    printf("\n");
    
    
    char run[5];// This is the right way to print string as an input from the user
    // Taking value of an string as an input using loops:
    for(int i = 0; i<5; i++)
    {
    	printf("Enter the %d value : \n",i);
    	scanf("%s",&run[i]);
	}
    // Taking value of an string as an input from the user:
    for(int q = 0; q<5; q++)
    {
    	printf("The value of %d no is %c\n",q,run[q]);
	}
    // Note %s is for taking input string from the user
    // Note %c is for printing the value of string..
	return 0;
}
