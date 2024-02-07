# include<iostream>
# include<string>
using namespace std;


bool is_punct(char a)
{

    if(a==' ')
        return true;
    else
        return false;
    
}

int num(string &s1)
{
    int sum=1;
    for( int i = 0; i<s1.length(); i++)
    {
        if((is_punct(s1[i])))
            sum+=1;
    }
    return sum;

}



int main(){

    string s1;
    
    getline(cin, s1);
    
    cout<<num(s1)<<endl;
    

    
    return 0;
}

