#include <iostream>

using namespace std;

void swap(int arr[], int i, int j){ // function to swap the elements of the array
    int temp = arr[i];              // store the value of the element
    arr[i] = arr[j];                // replace the value of the element
    arr[j] = temp;                  // replace the value of the element
}

void reverse(int arr[], int size){
    int start = 0;                  // start of the array
    int end = size - 1;             // end of the array
    while(start < end){             // while the start is less than the end
        swap(arr, start, end);      // swap the start and end
        start++;                    // increment the start
        end--;                      // decrement the end
    }
}
// Input: [1, 2, 3, 4, 5]
// Output: [5, 4, 3, 2, 1]
// Time complexity: O(n) where n is the number of elements in the array
// Space complexity: O(1) as no extra space is used


int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, size);
    cout<<"Reversed array is: ";
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    

}