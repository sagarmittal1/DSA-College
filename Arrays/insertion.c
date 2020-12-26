// Code for insertion of element in the array
// by using shifting of elements to the right

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[50], size, i, num, pos;
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	
	if(size >= 50){
		printf("Array Overflow \n");
		return 0;
	}else{
		printf("Enter the array elements: ");
		for(i = 0; i < size; i++){
			scanf("%d", &arr[i]);
		}
	
		printf("Enter the number to be inserted: ");
		scanf("%d", &num);
		
		printf("Enter the position for insertion: ");
		scanf("%d", &pos);
        if(pos < 0 || pos > size-1){
            printf("Invalid position");
        }
		
		for(i = size-1; i >= pos-1; i--){
			arr[i+1] = arr[i];
		}
		arr[pos-1] = num;
		size++;

		printf("\nThe inserted is now \n");		
		for(i = 0; i < size; i++){
			printf("%d ", arr[i]);
		}
	}
}