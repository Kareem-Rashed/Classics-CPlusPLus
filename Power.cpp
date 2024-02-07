# include<iostream>
using namespace std;


int power(int num, int p)
{
    if (p==0)
        return 1;
    else if (p==1)
        return num;
    else
        return(num*power(num,p-1));
}


int main(){
    
    
    cout<<power(2,3)<<endl;;
    
    
    
    
}
