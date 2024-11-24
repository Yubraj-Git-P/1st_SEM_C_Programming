#include <stdio.h>
// Write a program which take inputs from the user for integer array, character array, and floating array.

int main()

{
   int number[6];
   
   printf(" Enter your zeroth number :\n");
   scanf("%d",&number[0]);
   
   printf(" Enter your first number :\n");
   scanf("%d",&number[1]);
   
   printf(" Enter your second number :\n");
   scanf("%d",&number[2]);
   
   printf(" Enter your  third number :\n");
   scanf("%d",&number[3]);
   
   printf(" Enter your fourth number :\n");
   scanf("%d",&number[4]);
   
   printf(" Enter your fifth number :\n");
   scanf("%d",&number[5]);
   
   printf(" zeroth entered number is %d\n",number[0]);
   printf(" First entered number is %d\n",number[1]);
   printf(" second entered number is %d\n",number[2]);
   printf(" third entered number is %d\n",number[3]);
   printf(" fourth entered number is %d\n",number[4]);
   printf(" fifth entered number is %d\n",number[5]);
   
   printf("\n");
   
   char name[6];
   
   printf(" Enter zeroth letter :\n");
   scanf("%s",&name[0]);
   
   printf(" Enter first letter :\n");
   scanf("%s",&name[1]);
   
   printf(" Enter second letter :\n");
   scanf("%s",&name[2]);
   
   printf(" Enter third letter :\n");
   scanf("%s",&name[3]);
   
   printf(" Enter fourth letter :\n");
   scanf("%s",&name[4]);
   
   printf(" Enter  fifth letter :\n");
   scanf("%s",&name[5]);
   
   printf(" zeroth letter is %c\n",name[0]);
   printf(" first letter is %c\n",name[1]);
   printf("  second letter is %c\n",name[2]);
   printf(" third letter is %c\n",name[3]);
   printf(" fourth letter is %c\n",name[4]);
   printf(" fifth letter is %c\n",name[5]);
   
   printf("\n");
   
   float floatvalue[6];
   
   printf(" Enter zeroth floaing point :\n ");
   scanf("%f",&floatvalue[0]);
   
   printf(" Enter first floaing point : \n");
   scanf("%f",&floatvalue[1]);
   
   printf(" Enter second floaing point : \n");
   scanf("%f",&floatvalue[2]);
   
   printf(" Enter third floaing point : \n");
   scanf("%f",&floatvalue[3]);
   
   printf(" Enter fourth floaing point :\n");
   scanf("%f",&floatvalue[4]);
   
   printf(" Eneter fifth floaing point : \n");
   scanf("%f",&floatvalue[5]);
   
   
   printf(" zeroth  floating value is %f\n",floatvalue[0]);
   printf(" First floating value is %f\n",floatvalue[1]);
   printf(" second floating value is %f\n",floatvalue[2]);
   printf(" third floating value is %f\n",floatvalue[3]);
   printf(" fourth floating value is %f\n",floatvalue[4]);
   printf(" fifth floating value is %f\n",floatvalue[5]);
   
    return 0;
}
