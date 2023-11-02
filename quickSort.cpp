#include <iostream>
using namespace std;

int partitionFunction(int arr[], int low, int high){
    int pivot, i, j, temp;
    pivot=arr[low];
    i=low;
    j=high;
    while(i<j){
        while(arr[i]<=pivot && i<high) i++;
        while(arr[j]>pivot && j>low) j--;
        if(i<j) {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
    
}
void QuickSort(int arr[], int low, int high){
    int pivot;
    if(low>=high) return;
    pivot=partitionFunction(arr, low, high);
    QuickSort(arr, low, pivot-1);
    QuickSort(arr, pivot+1, high);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    QuickSort(arr, 0, n-1);
    for(auto i: arr){
        cout << i<< " ";
    }
    return 0;
}
