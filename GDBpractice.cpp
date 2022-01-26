using namespace std;
#include <iostream>

int findMax(int arr[], int size) {
  int max = 0;

  for(int i = 0; i < size; ++i) {
    if(arr[i] > max) {
      max = arr[i];
    }
  }

  return max;
}

int main() {

  int myArray1[4] = {9494, -5849, 76949, -3838};
  int myArray2[5] = {1, 2, 3, 4, 5};
  int myArray3[5] = {-5, -4, -6, -2, -1};

  cout << "Max element of first array is: " << findMax(myArray1, 5) << endl;
  cout << "Max element of second array is: " << findMax(myArray2, 5) << endl;
  cout << "Max element of third array is: " << findMax(myArray3, 4) << endl;


  return 0;
}
