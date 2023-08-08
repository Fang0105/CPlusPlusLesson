#include<iostream>
using namespace std;

int main(){
    long long ls = 299792458;
    long long lm = 60*ls;
    long long lh = 60*lm;
    long long ld = 24*lh;
    long long lw = 7*ld;
    long long ly = 365*ld;
    cout<<"1 Light-second(LS) is "<<ls<<" metres."<<endl;
    cout<<"1 Light-minute(LM) is "<<lm<<" metres."<<endl;
    cout<<"1 Light-hour(LH) is "<<lh<<" metres."<<endl;
    cout<<"1 Light-day(LD) is "<<ld<<" metres."<<endl;
    cout<<"1 Light-week(LW) is "<<lw<<" metres."<<endl;
    cout<<"1 Light-year(LY) is "<<ly<<" metres."<<endl;
    
    
    
    return 0;
}