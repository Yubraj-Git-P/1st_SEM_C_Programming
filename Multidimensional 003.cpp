#include <stdio.h>
// Write a program which print the mutidimensional arrays:
int main ()

{
	// Multidimensional arrays is a type of arays of arays which have the capacity to store multiple 
	// type of values inside it as the combination of arrays is called an multidimensional arrays
	
	int marks[3][4] = {{1,2,3,4},
	                   {5,6,7,8},
					   {9,10,11,12}};
	
	       /*    0   1   2  3
	        0//1   2   3  4
	        1//5   6   7  8
	        2//9   10  11 12 */ 
	        
	
	printf(" Marks at marks[0][0]] is %d\n",marks[0][0]);// 1
	printf(" Marks at marks[0][1]] is %d\n",marks[0][1]);// 2
	printf(" Marks at marks[0][2]] is %d\n",marks[0][2]);// 3
	printf(" Marks at marks[0][3]] is %d\n",marks[0][3]);// 4
	printf(" Marks at marks[1][0]] is %d\n",marks[1][0]);// 5
	printf(" Marks at marks[1][1]] is %d\n",marks[1][1]);// 6
	printf(" Marks at marks[1][2]] is %d\n",marks[1][2]);// 7
	printf(" Marks at marks[1][3]] is %d\n",marks[1][3]);// 8
	printf(" Marks at marks[2][0]] is %d\n",marks[2][0]);// 9
	printf(" Marks at marks[2][1]] is %d\n",marks[2][1]);// 10
	printf(" Marks at marks[2][2]] is %d\n",marks[2][2]);// 11
	printf(" Marks at marks[2][3]] is %d\n",marks[2][3]);// 12  
	
	
	
	return 0;
}
