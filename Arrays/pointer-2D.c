// In 2-D array we use double pointer

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int *p;
	p = &a[0][0]; // p = a[0]
	
	printf("%d\n", *(a+1));  // give the address of the pointer after moving it to 1
	printf("%d", *(*(a+1)));  // gives the value of it works as double pointer
	
	
	return 0;
}