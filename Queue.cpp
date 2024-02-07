# include<iostream>
# include<string>
using namespace std;


class queue{
    
private:
    int front;
    int rear;
    int size;
    int *arr;
public:
    queue(){
        front = -1;
        rear = -1;
        size = 10;
        arr = new int[size];
    }
    queue(int n)
    {
        front= -1;
        rear = -1;
        size = n;
        arr = new int[n];
    }
    bool IsEmpty(){
        return (front == -1 && rear == -1);
    }
    bool IsFull(){
        return ((rear+1)%size == front);
    }
    void Enqueue(int x){
        cout<<"Enqueuing "<<x<<" \n";
        if(IsFull())
        {
            cout<<"Error: Queue is Full\n";
            return;
        }
        if (IsEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear+1)%size;
        }
        arr[rear] = x;
        }
    void Dequeue()
        {
            cout<<"Dequeuing \n";
            if(IsEmpty())
            {
                cout<<"Error: Queue is Empty\n";
                return;
            }
            else if(front == rear )
            {
                rear = front = -1;
            }
            else
            {
                front = (front+1)%size;
            }
        }

};




int main(){

    string s1;
    
    getline(cin, s1);
    
    
    return 0;
}

