#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int score = 0;
    if(n<=10){
        score = n*6;
    }else if(n<=20){
        score = 6*10 + (n-10)*2;
    }else if(n<=40){
        score = 6*10 + 2*10 + (n-20)*1;
    }else{
        score = 100;
    }
    cout<<score<<endl;


    return 0;
}