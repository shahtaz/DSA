#include<bits/stdc++.h>

using namespace std;

void linear(int arr[], int n){
    int key;
    cin>>key;
    int idx = -1;

    for(int i=0; i<n; i++){
        if(arr[i] == key ){
            idx = i;
        }
    }

    if(idx != -1){
        cout<<"found at idx::" << idx<<endl;
    }
    else{
        cout<<"not found";
    }
}

void binary(int arr[], int n){
    // have to be sorted
    int key;
    cin>>key;
    int idx = -1;
    // key 
    // start------mid----key--end

    int start=0;
    int end = n-1;

    int mid;
    while(start<=end){
        mid = (start + end )/2;

        if(arr[mid] == key){
            idx = mid;
            break;
        }

        else if(arr[mid] > key){
            end = mid - 1;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
    }

    if(idx != -1){
        cout<<"found at::"<<idx;
    }
    else{
        cout<<"NOT found";
    }
}

void interpolation(int arr[], int n){
    int key;
    cin>>key;

    int idx = -1;

    int start = 0;
    int end  = n-1;
    int mid;

    while(start<=end){
        mid = start + ((end - start)*(key - arr[start])/(arr[end]-arr[start]));

        if(arr[mid] == key){
            idx = mid;
            break;
        }
        else if(arr[mid] < key ){
            start = mid + 1;
        }
        else if(arr[mid]> key){
            end = mid -1;
        }
    }

    if(idx != -1){
        cout<<"found at::"<<idx;
    }
    else{
        cout<<"NOt found";
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    sort(arr, arr+n);
    

    interpolation(arr, n);

    return 0;
}