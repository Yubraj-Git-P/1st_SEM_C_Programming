#include <stdio.h>

int main () 

{
	int position[5];
	
	printf(" Enter the value of zeroth position :\n");
	scanf("%d",&position[0]);
	
	printf(" Enter the value of first position :\n");
	scanf("%d",&position[1]);
	
	printf(" Enter the value of second position :\n");
	scanf("%d",&position[2]);
	
	printf(" Enter the value of third position :\n");
	scanf("%d",&position[3]);
	
	printf(" Enter the value of fourth position :\n");
	scanf("%d",&position[4]);
	
	printf(" Value of zeroth position[0] is %d\n",position[0]);
	printf(" Value of first position[1] is %d\n",position[1]);
	printf(" Value of second position[2] is %d\n",position[2]);
	printf(" Value of third position[3] is %d\n",position[3]);
	printf(" Value of fourth position[4] is %d\n",position[4]);
	
   printf("\n");
	
	char name[6];
	
	printf(" Enter your zeroth letter :\n");
	scanf("%s",&name['0']);
	
	printf(" Enter your first letter :\n");
	scanf("%s",&name['1']);
	
	printf(" Enter your second letter :\n");
	scanf("%s",&name['2']);
	
	printf(" Enter your third letter :\n");
	scanf("%s",&name['3']);
	
	printf(" Enter your fourth letter :\n");
	scanf("%s",&name['4']);
	
	printf(" Enter your fifth letter :\n");
	scanf("%s",&name['5']);
	
	printf(" Your name Zeorth letter is %c \n",name['0']);
	printf(" Your name first letter is %c \n",name['1']);
	printf(" Your name second letter is %c \n",name['2']);
	printf(" Your name third letter is %c \n",name['3']);
	printf(" Your name fourth letter is %c \n",name['4']);
	printf(" Your name fisthe letter is %c \n",name['5']);
	
    printf("\n");

	float floatvalue[6];
	
	printf(" Enter zeroth floating value :\n");
	scanf("%f",&floatvalue[0]);
	
	printf(" Enter first floating value :\n");
	scanf("%f",&floatvalue[1]);
	
	printf(" Enter second floating value :\n");
	scanf("%f",&floatvalue[2]);
	
	printf(" Enter third floating value :\n");
	scanf("%f",&floatvalue[3]);
	
	printf(" Enter fourth floating value :\n");
	scanf("%f",&floatvalue[4]);
	
	printf(" Enter fifth floating value :\n");
	scanf("%f",&floatvalue[5]);
	
	printf(" zeroth floating value is %f \n",floatvalue[0]);
	printf(" first floating value is %f \n",floatvalue[1]);
	printf(" second floating value is %f \n",floatvalue[2]);
	printf(" third floating value is %f \n",floatvalue[3]);
	printf(" fourth floating value is %f \n",floatvalue[4]);
	printf(" fifth floating value is %f \n",floatvalue[5]);
	
	
	return 0;
}
