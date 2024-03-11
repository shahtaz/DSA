#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    bool loop = true;


    while(loop){
        cout<<"1. Enqueue"<<'\n';
        cout<<"2. Dequeue"<<'\n';
        cout<<"3. Display"<<'\n';
        cout<<"4. Exit"<<'\n';

        int op;
        cin>>op;

        int front =-1;
        int rear = -1;

        switch(op){

            case 1:{
                if(rear = n-1){
                    cout<<"overflowing"<<'\n';
                }
                else if(front == -1 && rear == -1){
                    front++;
                    rear++;
                    cin>>arr[rear];
                }
                else if(rear>front){
                    rear++;
                    cin>>arr[rear];
                }
                break;
            }
            case 2:{
                if(front == -1){
                    cout<<"underflow"<<'\n';
                }
                else if(front == rear ){
                    front = -1;
                    rear = -1;
                }
                else{
                    front++;
                }
                break;
            }
            case 3:{
                //display;
                if(rear == -1 && front == -1){
                    cout<<"empty";
                }
                else{
                    for(int k=front; k<=rear; k++){
                        cout<<arr[k]<<' ';
                    }
                    cout<<'\n';
                }

                break;
            }
            case 4:{
                cout<<"Exiting......"<<'\n';
                loop = false;
                break;
            }
            default :{
                cout<<"Invalid input"<<'\n';
            }
        }
    }

    return 0;
}
