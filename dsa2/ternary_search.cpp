#include<bits/stdc++.h>


using namespace std;

void input();
int ternary(int arr[], int left, int right, int key);
void display(int res);

int main(){
    
    input();
    return 0;

}

void input(){
    cout<<"enter the number of element:: ";
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++) cin>>arr[i];

    sort(arr, arr+n);

    cout<<"enter the number you want to search:: ";
    int key;
    cin>>key;

    display(ternary(arr, 0, n-1, key));

}
int ternary(int arr[], int left, int right, int key){
    if(left<=right){

        int mid1 = left + (right - left)/3;
        int mid2 = right - (right - left)/3;

        if(arr[mid1] == key ) return mid1;
        if(arr[mid2] == key ) return mid2;


        if(key<arr[mid1]){
            return ternary(arr, left, mid1 -1 , key);
        }

        else if(key>arr[mid2]){
            return ternary(arr, mid2+1, right, key );
        }

        else{
            return ternary(arr, mid1+1, mid2-1, key);
        }
    }

    return -1;
}


void display(int res){
    if(res != -1){
        cout<<"found at idx:: "<<res<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}