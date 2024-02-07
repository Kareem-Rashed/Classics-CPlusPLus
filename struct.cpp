# include<iostream>
using namespace std;


struct student {
    string name;
    int totalPoints;
    char letterGrade;
};


void grade(student &S)
{
    if (S.totalPoints>90)
        S.letterGrade = 'A';
    else if (S.totalPoints>80)
        S.letterGrade = 'B';
    else if (S.totalPoints>70)
        S.letterGrade = 'C';
    else if (S.totalPoints>50)
        S.letterGrade = 'D';
    else if (S.totalPoints<50)
        S.letterGrade = 'F';
}

int main(){
    
    student S;
    S.totalPoints = 5;
    grade(S);
    cout<<S.letterGrade<<endl;
    
    
    return 0;
}
