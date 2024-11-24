#include <stdio.h>
// Acessing elements using array
// Write a program which accept the marks of four students in an array and printf in screen.
int main () 

{
    int marks[5];// Note from this we can take inputs of the variable inside the arrays
    // and we can prit the value of the variable on the screnn.
    
    printf(" Enter the value if zero student :\n");
    scanf("%d",&marks[0]);// taking valule of marks[0] using array
    
    printf(" Enter the value if first student :\n");
    scanf("%d",&marks[1]);// taking value of marks[1] using array
    
	printf(" Enter the value if second student :\n");
    scanf("%d",&marks[2]);// taking value of marks[3] using array
    
	printf(" Enter the value if third student :\n");
    scanf("%d",&marks[3]);// taking value of marks[4] using array
    
    printf(" Enter the value if fourth student :\n");
    scanf("%d",&marks[4]);//  taking value of marks [5] using array
    
    printf(" Finally marks of zeroth student is %d \n",marks[0]);
    //printing the value of marks[0] from using array
    printf(" Finally marks of first student is %d \n",marks[1]);
    //printing the value of marks[1] using array
    printf(" Finally marks of second student is %d \n",marks[2]);
    //printinf the value of marks[2] using array
    printf(" Finally marks of third student is %d \n",marks[3]);
    //printing the value of marks[3] using array
    printf(" Finally marks of fourth student is %d \n",marks[4]);
    // printing the value of marks[4] using array
	return 0;
}
