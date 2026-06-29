#include <iostream> 
using namespace std;

int main() {
    cout<<"Enter a temperature in celsius:";
    float c,f;
    cin>>c;
    f=(c*9/5)+32;
    cout<<"Temperature in fahrenheit is:"<<f;

    return 0;
}
