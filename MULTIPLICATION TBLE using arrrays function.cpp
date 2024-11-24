#include <stdio.h>
// Write a program in c language which print the multiplication table of 4,8,13.
// By using the concept of arrays and Function loops.
//int multtable(int array[], int num, int n); 
int multtable(int array[], int num, int n)
{   
    printf(" The multiplication table of %d is --\n",num);
     
    for(int i=0; i<10; i++)
    {
    	array[i] = num*(i+1);
	}
    for(int i=0; i<10; i++)
    {
    	printf("%d *%d = %d\n",num,(i+1),array[i]);
    }
    
    printf("**********************************************\n");
    printf("**********************************************\n");
}
int main ()

{   
    int array[3][10];
    
    multtable(array[0],4,10);
	multtable(array[1],8,10);
	multtable(array[2],13,10);
	
	return 0;
}
/*int multtable(int array[], int num, int n)
{   
    printf(" The multiplication table of %d is --\n",num);
     
    for(int i=0; i<10; i++)
    {
    	array[i] = num*(i+1);
	}
    for(int i=0; i<10; i++)
    {
    	printf("%d *%d = %d\n",num,(i+1),array[i]);
    }
    
    printf("**********************************************\n");
    printf("**********************************************\n");
}*/
