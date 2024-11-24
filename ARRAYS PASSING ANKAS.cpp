#include <stdio.h>
// Write a program which pass marks of 10 students using arrays;
int passing(int marks[]);// Functino prototype function prototype.
// Function prototype Function prototype function prototype.
int main ()

{
	int marks[] = {12,23,34,45,56,67,87,78,45,34};
	
	passing(marks);// Function calling Function calling
	// Function callings Function callings
	// Function callings Function callings
	return 0;
}
int passing(int marks[]) // Function Definition Function definition
// Function definition Funcition definition Fucntion definintion
// Function definition Funcition definition Function definition
{   

    // computer programming alin na jane ko manche ly yeasri garxa
	printf(" The marks of index[0] students is %d\n",marks[0]);
    printf(" The marks of index[1] students is %d\n",marks[1]);
    printf(" The marks of index[2] students is %d\n",marks[2]);
	printf(" The marks of index[3] students is %d\n",marks[3]);
	printf(" The marks of index[4] students is %d\n",marks[4]);
	printf(" The marks of index[5] students is %d\n",marks[5]);
	printf(" The marks of index[6] students is %d\n",marks[6]);
	printf(" The marks of index[7] students is %d\n",marks[7]);
	printf(" The marks of index[8] students is %d\n",marks[8]);
	printf(" The marks of index[9] students is %d\n",marks[9]);

    printf("\n");
    
    
    // Ali computer programming janeko manche ly yesari logics banauxa ne ta 
    
    int i;
    
    for(i=0;i<=9;i++){
    	
    	printf(" The marks of index[%d] students is %d \n",i,marks[i]);
	}

}
