// code for printing the array elements.
// Written espically in C because my exam are in this so can't take risk

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50], size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

	printf("Enter the array elements: ");
    for(i = 0; i < size; i++){
    	scanf("%d", &arr[i]);
	}
	
	printf("The array elements are: ");
	for(i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}

    return 0;
}