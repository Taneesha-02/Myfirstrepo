#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int start, int end) {
  while (start<=end) {
    int mid = start + (end-start)/2;

    if (arr[mid] == key)
      return mid;

    if (arr[mid] < key)
      start =mid + 1;

    else
      end =mid - 1;
  }

  return -1;
}

int main() {
  int arr[7] ={3, 4, 5, 6, 7, 8, 9};
  int key =9;
  int result =binarySearch(arr, key, 0, 6);
  if (result== -1){
    cout<<"not found";
  }
  else{
     cout<<"element is found at "<< (result+1) << " position";
  }
   
}