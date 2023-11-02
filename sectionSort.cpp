#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    int min, temp;
    for(int i=0; i<n; i++){
        min=i;
        for(int j=i+1; j<n;j++){
            if(arr[j]<arr[min]) min=j;
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        
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
    selectionSort(arr, n);
    for(auto i: arr){
        cout << i<< " ";
    }
    return 0;
}
