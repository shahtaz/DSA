#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cout<<"enter the size of queue::";
    cin>>n;

    int arr[n];

    bool loop = true;
    int front= -1;
    int rear = -1;

    while(loop){

        cout<<"1. enqueue"<<"\n";
        cout<<"2. dequeue"<<"\n";
        cout<<"3. display"<<"\n";
        cout<<"4. exit"<<"\n";

        int op;
        cin>>op;

        switch(op){
            case 1:{
                //enqueue
                if((front == 0 && rear == n-1)||(rear + 1 == front)){
                    cout<<"overflow"<<'\n';
                }
                else{
                    cout<<"enter::";

                    if(rear == -1){
                        front = 0;
                        rear = 0;
                    }
                    else if(rear == n -1){
                        rear = 0;
                    }
                    else{
                        rear++;
                    }

                    cin>>arr[rear];
                }
                break;
            }
            case 2:{
                //dequeue
                if(front == -1){
                    cout<<"underflow"<<'\n';
                }
                else{
                    if(front == rear){
                        front = -1;
                        rear = -1;
                    }
                    else if(front = n-1){
                        front = 0;
                    }
                    else{
                        front++;
                    }
                }
                break;
            }
            case 3:{
                //display
                if(front == rear){
                    cout<<"empty"<<'\n';
                }
                if(front>rear){
                    for(int i= front; i<n; i++){
                        cout<<arr[i]<<' ';
                    }
                    for(int i=0; i<=rear; i++){
                        cout<<arr[i]<<' ';
                    }
                }
                else{
                    for(int i=0; i<=rear; i++){
                        cout<<arr[i]<<' ';
                    }
                }
                break;
            }
            case 4:{
                cout<<"exiting...."<<'\n';
                loop = false;
                break;
            }

            default:{
                cout<<"invalid input"<<'\n';
                break;
            }
        }

    }

    return 0;
}