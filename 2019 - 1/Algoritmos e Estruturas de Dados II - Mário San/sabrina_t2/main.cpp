#include <iostream>

using namespace std;

long long int merge(int arr[], int temp[], int left, int mid, int right) {
   long long int i, j, k;
   long long int count = 0;

   i = left;    //i to locate first array location
   j = mid;     //i to locate second array location
   k = left;    //i to locate merged array location

   while ((i <= mid - 1) && (j <= right)) {
      if (arr[i] <= arr[j]) {    //when left item is less than right item
         temp[k++] = arr[i++];
      }else{
         temp[k++] = arr[j++];
         count += (mid - i);    //find how many convertion is performed
      }
   }

    while (i <= mid - 1)    //if first list has remaining item, add them in the list
       temp[k++] = arr[i++];

    while (j <= right)    //if second list has remaining item, add them in the list
       temp[k++] = arr[j++];

    for (i=left; i <= right; i++)
       arr[i] = temp[i];    //store temp Array to main array
    return count;
}

long long int mergeSort(int arr[], int temp[], int left, int right) {
   long long int mid;
   long long int count = 0;

   if (right > left) {
      mid = (right + left)/2;    //find mid index of the array
      count  = mergeSort(arr, temp, left, mid);    //merge sort left sub array
      count += mergeSort(arr, temp, mid+1, right);    //merge sort right sub array

      count += merge(arr, temp, left, mid+1, right);    //merge two sub arrays
   }
   return count;
}

long long int arrInversion(int arr[], int n) {
  long long int temp[n];
   return mergeSort(arr, temp, 0, n - 1);
}

int main() {
  int num;
  long long int arr[10000001];

  cin >> num;

  for(int i=0; i<num; i++){
    cin>>arr[i];
  }

  cout<<arrInversion(arr, num);
}
