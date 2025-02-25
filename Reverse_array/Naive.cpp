#include<iostream>
using namespace std;
void reverse(int arr[], int size){
    int arr1[size];
    for(int i = 0; i < size; i++){  // Copying the elements of the array in reverse order
        arr1[i] = arr[size - i - 1];
    }
    for(int i = 0; i < size; i++){  // Copying the elements of the array in reverse order
        arr[i] = arr1[i];
    }
    cout<<"Reversed array is: ";
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }   
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, size);
    return 0;
}