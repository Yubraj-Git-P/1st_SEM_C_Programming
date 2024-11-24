#include <stdio.h>
// write a program which reverses the arrays element passing through it...
int main ()

{   
    int revarray[10];// = {1,2,3,4,5,6,7,8,9,10};
    
    /*int i;
    
    for(i=9; i>=0; i--)
	{
     	printf(" The  reversing value of revarray[%d] is %d\n",i,revarray[i]);	
	}*/
	
	int i;
	
	for(i=0; i<=9; i++)
	{
		printf(" Enter the value of revarray[%d]:::: \n",i);
		scanf("%d",&revarray[i]);
		printf("\n");
	}
	
	printf(" After reversing the value of the arrays :: ");
	printf("\n");
	printf("\n");
	
	
	int a;
	
	for(a=9; a>=0; a--)
	{
		printf(" The reversing value of the revarray[%d] is %d",a,revarray[a]);
		printf("\n");
	}
    
	return 0;
}
