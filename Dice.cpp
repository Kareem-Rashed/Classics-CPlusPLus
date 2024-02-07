# include<iostream>
# include<cstdlib>
# include<cmath>
using namespace std;

class Dice{
    
private:
    int CurrentSide;
    int TotalRolls;
public:
    Dice(){
        CurrentSide = 1;
        TotalRolls = 0;
    }
    void Roll();
    void Reset();
    int get_CurrentSide();
    int get_TotalRolls();
    
};
void Dice::Roll(){
    
    srand(time(0));
    
    CurrentSide = 1 + rand()%6;
    TotalRolls+=1;

}
int Dice::get_TotalRolls(){
    return TotalRolls;
}
int Dice::get_CurrentSide(){
    return CurrentSide;
}
void Dice::Reset(){
    TotalRolls = 0;
}

int main(){
    
    Dice D1;
    
    D1.Roll();
    D1.Roll();
    D1.Roll();
    D1.Roll();
    D1.Reset();
    D1.Roll();
    
    cout<<D1.get_TotalRolls()<<endl;
    cout<<D1.get_CurrentSide()<<endl;
    
    return 0;
}

