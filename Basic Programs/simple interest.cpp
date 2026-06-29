#include<iostream>
using namespace std;

int main() {
    float p,r,t;
    cout<<"Enter principle value:";
    cin>>p;
    cout<<"Enter rate value:";
    cin>>r;
    cout<<"Enter time value:";
    cin>>t;
    float si=(p*r*t)/100;
    cout<<"Simple interest is:"<<si;
}