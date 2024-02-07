# include<iostream>
using namespace std;


int add(int *p1, int *p2)
{
    return(*p1+*p2);
}


int main(){
    
    int num1, num2;
    
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    
    int *p1 = &num1;
    int *p2 = &num2;
    
    cout<<add(p1,p2)<<endl;
    
}
