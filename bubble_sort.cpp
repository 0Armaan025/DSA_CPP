#include <iostream>
using namespace std;

void bubble_sort(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        bool swapped = false; 
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true; 
            }
        }
        
        if (!swapped) {
            break;
        }
    }
    
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    
    int n;
    cout<<"Please enter the no of elements: ";
    cin>>n;
    
    int arr[n];
    
    for(int i = 0;i<n;i++) {
        cin>>arr[i];
    }
    
    bubble_sort(arr, n);
    
    
    
    return 0;
}
