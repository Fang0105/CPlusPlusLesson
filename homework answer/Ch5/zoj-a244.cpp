#include<iostream>
using namespace std;

int main(){

    long long n;
    cin>>n;

    for(int i=0;i<n;i++){

        long long a,b,c;
        cin>>a>>b>>c;

        if(a==1){
            cout<<b+c<<endl;
        }else if(a==2){
            cout<<b-c<<endl;
        }else if(a==3){
            cout<<b*c<<endl;
        }else if(a==4){
            cout<<b/c<<endl;
        }
    }

    return 0;
}
