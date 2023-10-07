#include <iostream>

using namespace std;



int main(){
	
	long long a;
	cin>>a;
	long long ans = 0;
    while(a!=0){
        ans = ans*10 + a%10;
        a/=10;
    }
    cout<<ans<<endl;



	return 0;
}