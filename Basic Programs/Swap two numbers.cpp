#include <iostream> 
using namespace std;

int main() {
    cout<<"Enter 1st Number:";
    int x,y,z;
    cin>>x;
    cout<<"Enter 2nd Number:";
    cin>>y;
    cout<<"Before swapping your- \n1st number is:"<<x<<"\n2nd number is:"<<y<<endl;
    z=x;
    x=y;
    y=z;
    cout<<"After swapping your- \n1st number is:"<<x<<"\n2nd number is:"<<y<<endl;

    return 0;
}