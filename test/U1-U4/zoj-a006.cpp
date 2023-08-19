#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int d = b*b-4*a*c;
	if(d<0){
		cout<<"No real root"<<endl;
	}else if(d==0){
		int x = (-b)/(2*a);
		cout<<"Two same roots x="<<x<<endl;
	}else{
		int x1 = ((-b)+sqrt(d))/(2*a);
		int x2 = ((-b)-sqrt(d))/(2*a);
		cout<<"Two different roots x1="<<x1<<" , "<<"x2="<<x2<<endl;
	}
	
	return 0;
}