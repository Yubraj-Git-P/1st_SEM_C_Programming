#include <stdio.h>

int celtofah(int celsius);
// ( 1 degree celsius + 9*5) + 32 = 33.8 fahrenheit.
int main () 

{
    printf(" conversion of celsius into fohrenheit is %d", celtofah(2));
    
}
int celtofah(int celsius) {
	
	int celsius;
	int fahrenheit;
	
	fahrenheit = (celsius + 9*5) + 32;
	
	return fahrenheit;
}

