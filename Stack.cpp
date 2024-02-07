# include<iostream>
using namespace std;


class stack{
    
private:
    int size;
    int elements;
    int *arr;
public:
    stack(int n)
    {
        size = n;
        elements = 0;
        arr = new int[n];
    }
    bool is_full(){
        if(elements == size)
            return true;
        else
            return false;
    }
    bool is_empty(){
        if(elements == 0)
            return true;
        else
            return false;
    }
    void push(int x){
        if(is_full())
            cout<<"ERROR: Stack is Full"<<endl;
        else
        {
            arr[elements]=x;
            elements+=1;
        }
    }
    int pop(){
        if(is_empty())
        {
            cout<<"ERROR: Stack is empty"<<endl;
            return -1;
        }
        else
        {
            int out = arr[elements-1];
            elements-=1;
            return out;
        }
    }
    
};




int main(){

    stack S(5);
    
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);
    S.push(6);
    cout<<S.pop()<<endl;
    cout<<S.pop()<<endl;
    cout<<S.pop()<<endl;
    cout<<S.pop()<<endl;
    cout<<S.pop()<<endl;
    cout<<S.pop()<<endl;
    
    
    
    return 0;
}

