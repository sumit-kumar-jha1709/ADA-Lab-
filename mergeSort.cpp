// Program to sort an array with user input using merge sort

#include <bits/stdc++.h>
using namespace std;

// Function to input an array
void inputArray(int arr[], int size) {
  // cout << "Input element of array of size " << size << endl;
  for (int i = 0; i < size; i++)
    {
     cin >> arr[i];
    }
}

// Function to print an array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
}

// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int arr[], int start, int end, int mid) {
  int tempArray[end - start + 1];
  int index = 0;
  int firstArrayStartingPoint = start, secondArrayStartingPoint = mid + 1;
  while (firstArrayStartingPoint <= mid && secondArrayStartingPoint <= end) {
    if (arr[firstArrayStartingPoint] <= arr[secondArrayStartingPoint]) {
      tempArray[index] = arr[firstArrayStartingPoint];
      index++;
      firstArrayStartingPoint++;
    } else {
      tempArray[index] = arr[secondArrayStartingPoint];
      index++;
      secondArrayStartingPoint++;
    }
  }

  while (firstArrayStartingPoint <= mid) {
    tempArray[index] = arr[firstArrayStartingPoint];
    index++;
    firstArrayStartingPoint++;
  }
  while (secondArrayStartingPoint <= end) {
    tempArray[index] = arr[secondArrayStartingPoint];
    index++;
    secondArrayStartingPoint++;
  }

  // Store merged array in the main array

  int m = 0;
  for (int i = start; i <= end; i++) 
  {
    arr[i] = tempArray[m];
    m++;
  }
}

// Merge Sort Function
void mergeSort(int arr[], int start, int end) {

  if (start >= end) {
    return;
  }

  int mid = (end + ((start - end) / 2));

  mergeSort(arr, start, mid);
  mergeSort(arr, mid + 1, end);

  merge(arr, start, end, mid);
}

// Main Function
int main() {
  // For fast input and output
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  // Main Function
  int a[101], size;
  cin >> size;

  inputArray(a, size);

  int lastIndex = size - 1;
  mergeSort(a, 0, lastIndex);

  cout << "Array After sorting" << endl;
  printArray(a, size);

  return 0;
}
