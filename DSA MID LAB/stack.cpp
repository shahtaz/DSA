#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];

    int top = -1;
    bool loop = true;
    
    while(loop){
    
        cout<<"1. push"<<'\n';
        cout<<"2. pop"<<'\n';
        cout<<"3. display"<<'\n';
        cout<<"4. exit"<<'\n';
    
        int op;
        cin>>op;
    
        switch (op){
    
            case 1:{
                //push
                if(top >= n-1){
                    cout<<"overflow"<<'\n';
                }
    
                else{
                    cout<<"push"<<'\n';
                    top++;
                    cin>>arr[top];
                }
    
                break;
            }
    
            case 2:{
    
                //pop
                if(top <= -1){
                    cout<<"underflow"<<'\n';
                }
    
                else{
                    cout<<"pop:"<<'\n';
                    arr[top] = '\0';
                    top--;
                }
    
                break;
            }
    
            case 3:{
    
                //display
                if(top == -1 ){
                    cout<<"empty"<<'\n';
                }
    
                else{
                cout<<"stack::"<<'\n';
                for(int i=0; i<=top; i++){
                    cout<<arr[i]<<' ';
                }
                cout<<'\n';
                }
    
                break;
            }
            case 4:{
    
               loop = false;
    
                break;
            }
    
            default :{
    
                cout<<"invalid input"<<'\n';
    
                break;
            }
        }   
    }
    return 0;
}