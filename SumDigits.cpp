# include<iostream>
using namespace std;


int sumDigits(int num)
{
    if(num<10)
        return num;
    else
    {
        int digit = num%10;
        
        return (digit + sumDigits(num/10));
    }
    
    
}


int main(){
    
    
    cout<<sumDigits(134)<<endl;
    
    
    
    
}
