#include<bits/stdc++.h>

using namespace std;

void boubble(int arr[], int n);

void selection(int arr[], int n);

void insertion(int arr[], int n);


int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++) cin>>arr[i];

    cout<<"unsorted:: ";
    for(int i=0; i<n; i++) cout<<arr[i]<<' '; 

   //boubble(arr, n);
   //selection(arr, n);
   insertion(arr, n);
    cout<<" sorted arr::";
    for(int i=0; i<n; i++) cout<<arr[i]<<' '; 



    return 0;
}


//ascending order
void boubble(int arr[], int n){
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
             if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
             }
        }
    }

}

//descending order
void selection(int arr[], int n){
    // 1 3 2 4
    for(int i=0; i<n; i++){
        int idx = i;
        for(int j= i + 1; j<n; j++){
            if(arr[i]< arr[j]){
                idx = j;
            }
            int temp = arr[i];
            arr[i] = arr[idx];
            arr[idx] = temp;
        }
    }
}

void insertion(int arr[], int n){

    for(int i=1; i<n; i++){
        int flag, k;
        k = i -1 ;
        flag = arr[i];

        while(k>=0 && flag>arr[k] ){
            arr[k+1] = arr[k];
            k--;
        }

        arr[k+1] = flag;
    }
}