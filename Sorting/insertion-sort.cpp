// function to show insertion sorting

#include <iostream>
using namespace std;

void insertionSort(int a[], int n) {
	// in function array are passed by reference
	for(int i = 1; i < n; i++) {
		int key = a[i];
		int j = i-1;	
		while(j >= 0 && a[j] > key) {
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}


int main() 
{
	int arr[] = {7, 6, 5, 4, 3, 2, 1};
	
	insertionSort(arr, 7);
	
	for(int i = 0; i < 7; i++) {
		cout << arr[i] << " ";
	}
}