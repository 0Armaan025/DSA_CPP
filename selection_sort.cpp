#include <iostream>
using namespace std;


void selection_sort(int arr[], int n) {

    

    for(int i = 0;i<n-1;++i) { // 0 to end - 1
        for(int j=i+1;j<n;j++) { // 1 to the end
            if(arr[j]<arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i = 0;i<n;++i) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

int main() {


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int number;

    cout<<"Enter the number of elements"<<endl;
    cin>>number;

    int arr[number];

    for(int i = 0;i<number;i++) {
        cin>>arr[i];
    }

    selection_sort(arr, number);

    return 0;
}