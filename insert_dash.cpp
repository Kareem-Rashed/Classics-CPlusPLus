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

void remove_punc(string &s1)
{
    string s;
    for( int i = 0; i<s1.length(); i++)
    {
        if((is_punct(s1[i])))
            s1[i] = '-';
    }

}



int main(){

    string s1;
    
    getline(cin, s1);
    
    remove_punc(s1);
    
    cout<<s1<<endl;
    
    return 0;
}

