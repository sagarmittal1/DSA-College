// Code for understanding what is 2-D array
// It is simple taking elements at runtime and printing like a matrix

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, i, j;
	printf("Enter the row in the matrix: ");
	scanf("%d", &a);
	
	printf("Enter the column in the matrix: ");
	scanf("%d", &b);
	
	int arr[a][b];
	
	printf("Enter the matrix elements: \n");
	for(i = 0; i < a; i++){
		for(j = 0; j < b; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("The array elements are: \n");
	for(i = 0; i < a; i++){
		for(j = 0; j < b; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}