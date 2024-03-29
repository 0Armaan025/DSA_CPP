#include <iostream>
using namespace std;


int binarySearch(int arr[], int n, int key) {
    int s = 0;
    int e = n; 

    while(s<=e) {
        int mid = (s+e)/2;
        
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] > key) {
            e = mid-1;
        }
        else {
            e = mid + 1;
        }
    }


    return -1;
}

int main() {

    // binary search this time
    //time complexity = O(log n base 2)

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cout<<"Please enter the no of elements"<<endl;
    cin>>n;

    int arr[n];

    cout<<"Please enter the elements"<<endl;
    for(int i = 0;i<n;i++) {
        cin>>arr[i];
    }

    int key;
    cout<<"Please enter the key"<<endl;
    cin>>key;

    cout<<binarySearch(arr, n, key);

    return 0;
}