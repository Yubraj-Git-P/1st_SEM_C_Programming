#include <stdio.h>
//Looping harry.
int main (){
	
	int i;
	
	printf("Value : ");
	scanf("%d",&i);
	
    while(i>=10 && i<=100){
		
		printf("%d",i);
		printf("\n");
		i+=5;
	}

	return 0;
}
