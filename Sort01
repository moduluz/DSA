#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n){
    int left = 0, right = n - 1;

    while(left < right){
        // Increment left index if the left element is 0
        while(arr[left] == 0 && left < right){
            left++;
        }

        // Decrement right index if the right element is 1
        while(arr[right] == 1 && left < right){
            right--;
        }

        // Swap elements if left is less than right
        if(left < right){
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
}

int main() {
    int arr[10] = {0, 1, 1, 0, 1, 0, 0, 1, 1, 0};

    cout << "Original array: ";
    printArray(arr, 10);

    sortOne(arr, 10);

    cout << "Sorted array: ";
    printArray(arr, 10);

    return 0;
}

