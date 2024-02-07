# include<iostream>
using namespace std;


int second_highest(int arr[], int size)
{
    int max = arr[0];
    int index = 0;
    
    for(int i = 0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            index = i;
        }
    }
    arr[index] = -1;
    max = arr[0];
    
    for(int i = 0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            index = i;
        }
    }
    return max;
    
    
}

int main(){
    
    int size;
    
    cout<<"How big is your array: ";
    cin>>size;
    
    int *arr = new int[size];
    
    for(int i = 0; i<size; i++)
        cin>>arr[i];
    
    cout<<"Here is yout array: "<<endl;
    for(int i = 0; i<size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    
    cout<<"The second highest number is: "<<second_highest(arr, size)<<endl;
    return 0;
}
