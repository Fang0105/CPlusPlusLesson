#include<iostream>
#include<math.h>
using namespace std;

int main(){


    int k;
    cin>>k;

    while(k--){
        int n;
        cin>>n;

        //先輸出正常金字塔的前 i=0 ~ i<n-3
        for(int i=0;i<n-3;i++){
            for(int j=0;j<n-1-i;j++){
                cout<<" ";
            }
            for(int j=0;j<2*i+1;j++){
                cout<<"*";
            }
            cout<<endl;
        }

        //輸出2*n-1個＊
        for(int j=0;j<2*n-1;j++){
            cout<<"*";
        }
        cout<<endl;

        //輸出1個空格和2*n-3個＊
        cout<<" ";
        for(int j=0;j<2*n-1-2;j++){
            cout<<"*";
        }
        cout<<endl;

        //輸出2*n-1個＊
        for(int j=0;j<2*n-1;j++){
            cout<<"*";
        }
        cout<<endl;

        //輸出正常金字塔的前 i=0 ~ i<n-3 ，不過是倒過來的
        for(int i=n-4;i>=0;i--){
            for(int j=0;j<n-1-i;j++){
                cout<<" ";
            }
            for(int j=0;j<2*i+1;j++){
                cout<<"*";
            }
            cout<<endl;
        }

    }






    return 0;
}