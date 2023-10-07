#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int tot = 0;

    while(n!=0){
        int x = n%10;
        tot+=x;
        n/=10;
    }
    cout<<tot<<endl;



    return 0;
}