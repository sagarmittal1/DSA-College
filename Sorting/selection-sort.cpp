// function to sort the items using seleciton sort

#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
	for(int i = 0; i < n-1; i++) {
		int imin = i;
		
		for(int j = i+1; j < n; j++) {
			if(a[j] < a[imin]) {
				imin = j;
			}
		}
		
		int temp = a[i];
		a[i] = a[imin];
		a[imin] = temp;
	}
}

int main()
{
    // they are provided in compile time to save time but they can also be taken by user
	int arr[] = {2, 1, 3, 5, 6, 4, 7};
	selectionSort(arr, 7);
	
	for(int i = 0; i < 7; i++) {
		cout << arr[i] << " ";
	}
}