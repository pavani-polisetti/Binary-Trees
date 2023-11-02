#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    int min, temp, swap;
    for(int i=0; i<n; i++){
        swap=1;
        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=0;
            }
        }
        if(swap) break;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    for(auto i: arr){
        cout << i<< " ";
    }
    return 0;
}
