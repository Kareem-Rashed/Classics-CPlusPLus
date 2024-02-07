# include<iostream>
# include<string>
using namespace std;


int main(){

    
    int row, columns;
    
    cout<<"Enter dimensions: ";
    cin>>row>>columns;
    
    int **arr = new int*[row];
    
    for(int i = 0; i<row; i++)
        arr[i] = new int[columns];
    
    
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<columns; j++)
            cin>>arr[i][j];
    }
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<columns; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    
    for (int i = 0; i < row; i++)
            delete[] arr[i];
        
    delete[] arr;

    
    return 0;
}

