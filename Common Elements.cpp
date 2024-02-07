#include <iostream>
using namespace std;





int main() {

    int s1,s2;
    cin>>s1>>s2;
    int *arr1 = new int[s1];
    int *arr2 = new int[s2];
    
    for (int i=0; i<s1; i++){
        cout<<"For Array 1, Enter element number "<<i+1<<":";
        cin>>arr1[i];
    }
    for (int j=0; j<s2; j++){
        cout<<"For Array 2, Enter element number "<<j+1<<":";
        cin>>arr2[j];
    }

    
    cout<<endl<<"Here are the repeated numbers: ";
    for (int k = 0; k<s1; k++)
    {
        for(int i =0; i<s2; i++)
        {
            if (arr1[k] == arr2[i])
                cout<<arr1[k]<<" ";
        }
    }
    cout<<endl;
    
    
    return 0;
}
