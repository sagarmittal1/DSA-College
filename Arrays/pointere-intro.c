// basic program for understanding the pointer

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int b = 10;
	int *p;
	p = &b;
	
	printf("%d\n", b);
	printf("%d\n", *p); // dereferencing it and get the value
	printf("%p\n", &b); // to getting address just use %p 
	printf("%p\n", p);  // pointer stores the address so it will show hex value
	
	return 0;
}