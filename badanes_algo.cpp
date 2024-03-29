#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int max_sum_subarray(int arr[], int n) {
    int max_ending_here = 0, max_so_far = INT_MIN;
    for(int i = 0; i<n;i++) {
        max_ending_here = max_ending_here + arr[i];

        if(max_ending_here<arr[i]) {
            max_ending_here = arr[i];
        }

        if(max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
    }
    return max_so_far;
}

int main() {

    int array[] = {1,5,1,14,1,5,-14,1,-143,1,-1341,-14,-412,-142,14,1131};

    int sum = max_sum_subarray(array,(sizeof(array)/sizeof(array[0])));

    cout<<sum<<endl;

    return 0;
}