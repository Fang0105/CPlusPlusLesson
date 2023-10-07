#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int princeWin = 0, princessWin = 0;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;

        if(a==0){
            if(b==0){

            }else if(b==2){
                princeWin++;
            }else if(b==5){
                princessWin++;
            }
        }else if(a==2){
            if(b==0){
                princessWin++;
            }else if(b==2){

            }else if(b==5){
                princeWin++;
            }
        }else if(a==5){
            if(b==0){
                princeWin++;
            }else if(b==2){
                princessWin++;
            }else if(b==5){
                
            }
        }
    }

    if(princeWin > princessWin){
        cout<<"The prince wins."<<endl;
    }else if(princeWin < princessWin){
        cout<<"The princess wins."<<endl;
    }else if(princeWin == princessWin){
        cout<<"The referee wins."<<endl;
    }

    return 0;
}