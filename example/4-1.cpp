#include<iostream>
using namespace std;

int main(){

    int a;
    cin>>a;

    if(a%3==0){
        cout<<a/3<<endl;
    }else if(a%3==1){
        cout<<a*3<<endl;
    }else{
        cout<<a+3<<endl;
    }




    return 0;
}