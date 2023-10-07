#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a,b=0;
	for(int i=0;i<n;i++){
		 cin>>a;
		 if(a>b){
		 	b=a;
		 }
	}
	cout<<b<<endl;




	return 0;
}