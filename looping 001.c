#include <stdio.h>
//WAP which print the multiplication table as the user want.
int main () {
	
	int a = 1;
	int num;
	
	printf(" num value : ");
	scanf("%d",&num);
	
	do{
		printf(" %d * %d = %d",num,a,num*a);
		printf("\n");
		a++;
	}while(a<=10);

	return 0;
}
