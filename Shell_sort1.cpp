#include <iostream>
using namespace std;

// Shell sort
void shellSort(int array[], int n) {
  // Rearrange elements at each n/2, n/4, n/8, ... intervals
  for (int gap = n / 2; gap > 0; gap /= 2) {
    for (int i = gap; i < n; i += 1) {
      int temp = array[i];
      int j;
      for (j = i; j >= gap && array[j - gap] > temp; j -= gap) {
        array[j] = array[j - gap];
      }
      array[j] = temp;
    }
  }
}

// Print an array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// Driver code
int main() {
    int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;

	int data[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>data[i];
	}
 // int data[] = {9, 8, 3, 7, 5, 6, 4, 1};
  //int size = sizeof(data) / sizeof(data[0]);
  shellSort(data, n);
  cout << "Sorted array: \n";
  printArray(data, n);
}
