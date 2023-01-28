#include<iostream>
#include<array>
using namespace std;
void InsertionSort(int Arr[], int l){
    int j;
    for(int i=1; i<l; i++){
        j = i;
        while(j > 0 && Arr[j-1] > Arr[j]){
            swap(Arr[j],Arr[j-1]);
            j = j-1;
        }
    }
}

void PrintArray(int Arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<Arr[i]<<" ";
    }

}

int main(void){
    int n;
    cout<<"Enter the length of the array you want to enter : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    InsertionSort(arr, n);
    PrintArray(arr, n);
    return 0;
}

