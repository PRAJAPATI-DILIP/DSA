#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid;  // element found

        else if (arr[mid] < target)
            left = mid + 1;  // search right half

        else
            right = mid - 1; // search left half
    }

    return -1; // element not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = 5;
    int target;
    int i=0;
    
    while(i<5){
        cout<<"The elements are:  "<<arr[i]<<"\n";

        i++;
    }

   

    cout<<"Enter the target value: ";
     cin>>target;

    int result = binarySearch(arr, n, target);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}