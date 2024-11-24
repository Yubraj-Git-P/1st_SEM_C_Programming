#include <stdio.h>
// Write a program which print the adition of a numnber by using the concept of
// pointer using array to Funciton
void sum(int *addition);
int main ()

{
	int arr[] = {12,34,56,75,66};
	
	sum(arr);
	
	
	return 0;
}
void sum(int *addition)
{
	printf(" value 1st %d\n",*addition);
	printf(" value 2nd %d\n",*(addition+1));
	printf(" value 3nd %d\n",*(addition+2));
	printf(" value 4nd %d\n",*(addition+3));
	printf(" value 5nd %d\n",*(addition+4));
	
	
}
