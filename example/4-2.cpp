#include<iostream>
using namespace std;

int main(){

    int a;
    cin>>a;

    if(a%3==0 && a>=5000){
        cout<<a/3<<endl;
    }else if(a%3==1 && a>=4500){
        cout<<a*3<<endl;
    }else if(a%3==2){
        cout<<a+3<<endl;
    }else{
        cout<<"^_^"<<endl;
    }




    return 0;
}