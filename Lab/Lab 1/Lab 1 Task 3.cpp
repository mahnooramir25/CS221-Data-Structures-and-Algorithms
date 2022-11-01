//Using the concept of the dynamic array, prompt the user to enter the size of the array, prompt
//the user to enter the elements of the array, and then show the array elements in reverse order.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of array\n";
    cin >> n;
    int* arr = new int(n);
    cout << "Enter elements in array\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Elements in reverse order are:\n";
    for (int i = n-1; i >= 0; i--) {
        cout << arr[i]<<endl;
    }
    delete[] arr;    //emptying a dynamically created array
}
