#include <stdio.h>
/*Write a program in c language to print doller's in this format.
$
$$
$$$
$$$$
$$$$$
*/
int main(){
	
	int i,n;
	printf("Enter your number:  ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		
		printf("$");
		printf("\n");
	}

	return 0;
}
