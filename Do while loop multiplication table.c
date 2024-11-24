#include <stdio.h>

int main () {
	
	
	int a,num;
	
	printf(" num value : ");
	scanf(" %d",&num);
	
	for(a=10;a>=1;a--){
		
		printf(" %d * %d = %d ",num,a,num*a);
		printf("\n");
	}
	
	return 0;
}
