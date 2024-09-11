#include<bits/stdc++.h>

using namespace std;

int binary(int arr[], int left, int right, int key);
void input();

void display(int res);


int main(){

    input();

    return 0;
}

int binary(int arr[], int left, int right, int key){

    if(right>=left){
        int mid = left + (right - left)/2;

        if(arr[mid]== key ) return mid;

        if(arr[mid]> key ){
            return binary(arr, left, mid-1, key);
        }
        else{
            return binary(arr, mid+1, right, key);
        }
    }

    return -1;
}

void input(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++) cin>>arr[i]; //input done

    sort(arr, arr+n);   //sort if the data isnt sorted

    int key ;
    cin>>key;

    display(binary(arr, 0 , n-1, key));
    
}

void display(int res){
    if(res != -1){
        cout<<"found at <<"<<res<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}