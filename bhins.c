#include <stdio.h>
//WAP multilication table reverse order while loop
int main (){
	
	int a = 10;
	int num;
	
	printf(" Num value : ");
	scanf("%d",&num);
	
	while(a>=1){
		
		printf("%d * %d = %d",num,a,num*a);
		printf(" \n");
		a--;
	}
	
	
	return 0;
}
