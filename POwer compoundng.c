#include <stdio.h>
#include <math.h>
// Compund effect: 
int main () {
	
	int i;
	int a = 2;
	
	//printf(" Value a : \n");
	//scanf("%d",&a);
	
	//printf(" Value b : \n");
	//scanf("%d",&b);
	
	for(i=0;i<=32;i+=1){
	
	// 2*0 2*1 2*2 2*3 2*4 2*5 2*6 2*7 2*8
		
		printf("%f",pow(a,i));
		printf("\n");
	}
	
	return 0;
}
