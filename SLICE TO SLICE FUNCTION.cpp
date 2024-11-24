#include <stdio.h>
// Write a program which makes slice to slice fucntion that mean ectract the certaion elments from the
// strings written
void slice(char *st, int m, int n);
int main ()

{
	char st[50] = "HELLOWBROTHER";
	
	slice(st,1,6);
	
	printf("%s",st);
	
	return 0;
}
void slice(char *st, int m, int n)
{
	int i = 0;
	
	while((i+m)<n)
	{
	  st[i] = st[(i+m)];
	  i++;	
	}
	st[i] = '\0';
}
