// function to sort using bubble sort
// for the easiness array input is taken in code

#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n-i-1; j++) {
			
			if(a[j] > a[j+1]) {
				
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = {2, 1, 3, 5, 6, 4, 7};
	bubbleSort(arr, 7);  // calling bubble sort function
	
	for(int i = 0; i < 7; i++) {
		cout << arr[i] << " ";
	}
}