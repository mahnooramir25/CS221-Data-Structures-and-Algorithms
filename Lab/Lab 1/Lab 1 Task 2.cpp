// Sum all the elements of an integer array using the concept of pointer.
#include <iostream>
using namespace std;
int main() {
    int arr[5] = { 11,2,4,5,7 };
    cout << "Elements in array are:"<<endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
    int sum = 0, * p;
    for (p = &arr[0]; p <= &arr[4]; p++) //pointer p points to the first element in the array that is 0                                          
    {                                    //runs as long as address of p i.e address of element in a[0] is less than address of element in a[4]
        sum = sum + *p;                  //derefrencing the value of p and adding to sum
    }
    cout << "Sum of all elements is " << sum;
}