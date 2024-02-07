#include <iostream>
#include <string>
using namespace std;

int handshakes(int n)
{
    if (n==1)
        return 0;
    else if (n==2)
        return 1;
    else
        return (handshakes(n-1)+n-1);
}

int main() {
    int n;
    
    while (n!=69)
    {
        cin>>n;
        cout<<handshakes(n)<<endl;
    }
}
