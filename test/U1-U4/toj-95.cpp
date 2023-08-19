#include<iostream>
using namespace std;

int main(){

    int grade,goal;
    cin>>grade>>goal;
    if(grade==1&&goal>=8){
        cout<<"PASS!"<<endl;
    }
    else if(grade==2&&goal>=9){
        cout<<"PASS!"<<endl;
    }
    else if(grade==3&&goal>=10){
        cout<<"PASS!"<<endl;
    }
    else{
        cout<<"FAIL! You see see you!"<<endl;
    }

    return 0;
}
