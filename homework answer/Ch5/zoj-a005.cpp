#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(b-a==c-b){
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d+b-a<<endl;
		}else{
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d*(b/a)<<endl;
		}
	}
	
	
	return 0;
}