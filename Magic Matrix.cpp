#include <iostream>
#include <string>
using namespace std;


bool isMagic(int arr[3][3])
{
    int sum=0;
    for(int i = 0; i<3; i++)
        sum+=arr[0][i];
    for(int j = 0; j<3; j++)
    {
        int check = 0;
        for(int k = 0; k<3; k++)
            check+=arr[j][k];
        if(check != sum)
            return false;
    }
    if (((arr[0][0]+arr[1][1]+arr[2][2])!=sum)||(arr[0][2]+arr[1][1]+arr[2][0])!=sum)
        return false;
    else
        return true;
}


int main() {
    
    int arr[3][3];
    cout<<"Enter your 3x3 matrix: "<<endl;
    
    cin>>arr[0][0]>>arr[0][1]>>arr[0][2];
    cin>>arr[1][0]>>arr[1][1]>>arr[1][2];
    cin>>arr[2][0]>>arr[2][1]>>arr[2][2];
    
    cout<<"Here is the matrix you entered: "<<endl;
    
    for(int j = 0; j<3; j++)
    {
        for(int k = 0; k<3; k++)
            cout<<arr[j][k]<<" ";
        cout<<endl;
    }
    if(isMagic(arr))
        cout<<"This matrix is in fact a magic square!"<<endl;
    else
        cout<<"This matrix is in fact not magic square :("<<endl;
}
