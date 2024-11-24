#include <stdio.h>
// Using function convert celsius into fahrenheit.
int celtofah(int celsius);
int main () 

{
	printf(" Conversion of celsius into fahrenheit is %d",celtofah(99));
	
	return 0;
}
int celtofah(int celsius)
{
	float fahrenheit;
	
	fahrenheit = celsius*1.8 + 32;
	
	return fahrenheit;
}
