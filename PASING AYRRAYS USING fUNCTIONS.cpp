#include <stdio.h>


int display(int array[]){
	
	int i;
	for(i=0;i<=4;i++){
		
		printf(" The value of %d is %d\n",i,array[i]);
	}
}

int main() {
	
	
	int arr[] = {12,23,34,45,56};
	
	display(arr);
	
	
	
	return 0;
}
