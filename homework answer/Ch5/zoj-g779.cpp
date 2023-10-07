#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    bool k;
    if(a%b==0){
        k = true;
    }else{
        k = false;
    }
    while(a!=0){
        int x = a%10;
        if(x==b){
            k = true;
        }
        a/=10;
    }
    if(k==true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }





	return 0;
}