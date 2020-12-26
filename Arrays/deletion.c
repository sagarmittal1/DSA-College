// Code for deletion of a element in an array
// Move the array element to the left till the index where the element to be removed
// Then decrease the size to -1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[50], size, i, pos, item;
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	if(size > 50){
		printf("Array Overflow Condn.\n");
		return 0;
	}
	
	printf("Enter the array elements: ");
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the position where to delete the element: ");
	scanf("%d", &pos);
	if(pos < 0 || pos > size){
		printf("Invalid Position entered.\n");
	}else{
		item = arr[pos-1];
		
		for(i = pos-1; i < size-1; i++){
			arr[i] = arr[i+1];
		}
		size--;
		
		printf("\n\nThe element that removed was %d at position %d\n", item, pos);
		printf("After deletion the new array is: ");
		
		for(i = 0; i < size; i++){
			printf("%d ", arr[i]);
		}
	}

	return 0;
}