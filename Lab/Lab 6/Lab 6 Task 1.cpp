// Lab 6 Task 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Write a C++ program that sorts the even-positioned elements in ascending order and the odd-positioned
//elements in descending order using insertion sort. 

#include <iostream>
using namespace std;
void acsinsertionsort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements greater than key, to one position ahead of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void dcsinsertionsort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements less than key, to one position ahead of their current position */
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main()
{

    int size, even = 0, odd = 0;
    do {
        cout << "Enter even size of array" << endl;  // takes size of array
        cin >> size;
    } while (size % 2 != 0);

    int* arr = new int(size);
    int* arr2 = new int(size / 2);
    int* arr3 = new int(size / 2);
    cout << "Enter elements into array " << endl;  // enter elements into array
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {            //for putting into two different arrays
        if ((arr[i]) % 2 == 0) {
            arr2[even] = arr[i];
            even++;
        }
        else {
            arr3[odd] = arr[i];
            odd++;
        }

    }
    acsinsertionsort(arr2, even);
    dcsinsertionsort(arr3, odd);
    cout << "Array elements of even numbers (ascending): " << endl;
    for (int g = 0; g < even; g++) {
        cout << arr2[g] << " ";

    }
    cout << endl;
    cout << "Array elements of odd numbers (descending): " << endl;
    for (int h = 0; h < odd; h++) {
        cout << arr3[h] << " ";

    }
    delete[]arr;
    delete[]arr2;
    delete[]arr3;

}

