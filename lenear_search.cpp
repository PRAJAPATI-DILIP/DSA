#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 7, 2, 9, 5};
    int n = 5;
    int target;
    int i=0;

    while(i<5){
        cout<<"The element are: "<<arr[i]<<"\n";
        i++;



    }


    cout << "Enter the value to search: ";
    cin >> target;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}