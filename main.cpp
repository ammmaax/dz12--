#include <iostream>
#include <windows.h>
using namespace std;

int* filterOddAndZero(int* arr, int size, int& newSize) {
    newSize = 0;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] % 2 != 0 || arr[i] == 0) {
            newSize++;
        }
    }
    int* newArr = new int[newSize];
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0 || arr[i] == 0) 
        {
            newArr[j++] = arr[i];
        }
    }
    return newArr;
}

int main() {
    int size = 10;
    int* arr = new int[size]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Початковий масив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int newSize;
    int* filteredArr = filterOddAndZero(arr, size, newSize);
    cout << "Новий:" << endl;
    for (int i = 0; i < newSize; i++) {
        cout << filteredArr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
