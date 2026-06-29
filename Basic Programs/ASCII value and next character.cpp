#include <iostream> 
using namespace std;

int main() {
    cout<<"Enter a single character:";
    char x;
    cin>>x;
    int y=(int)x;
    cout<<"ASCII value of your character is:"<<y<<endl;
    int z=y+1;
    char a=(char)z;
    cout<<"Character that comes after this is:"<<a;

    return 0;
}
