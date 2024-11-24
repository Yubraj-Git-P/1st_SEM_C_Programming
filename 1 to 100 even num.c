#include <stdio.h>

int main (){
	
	int i,n;
	
	printf("Enter your number : ");
	scanf("%d",&n);
	
	//2, 2*2, 3*2,------ 2*50;
	for(i=1; i<=n; i++) {
		
		printf("%d",(2*i));
		printf("\n");
	}
	
	return 0;
}
