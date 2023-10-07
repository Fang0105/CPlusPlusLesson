#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    int tot = 0;

    for(int i=a;i<=b;i++){
        if(i%c==0){
            tot+=i;
        }
    }

    cout<<tot<<endl;


    return 0;
}