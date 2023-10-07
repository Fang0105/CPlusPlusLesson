#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
     
    while(n--){
        int k,p;
        cin>>k>>p;
        while(p--){
            for(int i=1;i<=k;i++){
                for(int j=0;j<i;j++){
                    cout<<i;
                }
                cout<<endl;
            }
            for(int i=k-1;i>0;i--){
                for(int j=0;j<i;j++){
                    cout<<i;
                }
                cout<<endl;
            }
            cout<<endl;
        }
    }
    



    return 0;
}