#include <stdio.h>
//WAP which make the multiplication in reverse order
int main (){
	
	int num,i;
	
	printf("num value : ");
	scanf("%d",&num);
	
	for(i=10;i>=1;i-=3){
		
		printf(" %d * %d = %d ",num,i,num*i);
		printf("\n");
	}
	
	
	return 0;
}
