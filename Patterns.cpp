# include<iostream>
using namespace std;




int main(){
    
    for(int i = 1; i<=6; i++)
    {
        if ((i%2)==0)
        {
            for(int j = 0; j<i; j++)
            {
                cout<<"$";
            }
            cout<<endl;
        }
        else
        {
            for(int j = 0; j<i; j++)
            {
                cout<<j+1;
            }
            cout<<endl;
        }
    }
    cout<<endl;
    
    int arr[5];
    
  
    
    return 0;
}
