# include<iostream>
# include<string>
using namespace std;


bool is_punct(char a)
{
    char punc[4] = {'.',':','!','?'};
    for(char c:punc)
    {
        if(c==a)
            return true;
    }
    return false;
    
}

string remove_punc(string &s1)
{
    string s;
    for( int i = 0; i<s1.length(); i++)
    {
        if(!(is_punct(s1[i])))
            s+=s1[i];
    }
    return s;
}



int main(){

    string s1;
    
    getline(cin, s1);
    
    cout<<endl<<remove_punc(s1)<<endl;
    
    return 0;
}

