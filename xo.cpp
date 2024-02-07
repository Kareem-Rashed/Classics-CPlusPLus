#include <iostream>
#include <string>
using namespace std;


bool isDoneO(string arr[3][3])
{
    string str = "O";
    for(int j = 0; j<3; j++)
    {
        int sum = 0;
        for(int k = 0; k<3; k++)
        {
            if(arr[j][k]==str)
                sum+=1;
            if(sum==3)
                return true;
        }
    }
    for(int j = 0; j<3; j++)
    {
        int sum = 0;
        for(int k = 0; k<3; k++)
        {
            if(arr[k][j]==str)
                sum+=1;
            if(sum==3)
                return true;
        }
    }
    if ((arr[0][0]==str)&&(arr[1][1]==str)&&(arr[2][2]==str))
        return true;
    else if ((arr[0][2]==str)&&(arr[1][1]==str)&&(arr[2][0]==str))
        return true;
    else
    {
        return false;
    }
}
bool isDoneX(string arr[3][3])
{
    string str = "X";
    for(int j = 0; j<3; j++)
    {
        int sum = 0;
        for(int k = 0; k<3; k++)
        {
            if(arr[j][k]==str)
                sum+=1;
            if(sum==3)
                return true;
        }
    }
    for(int j = 0; j<3; j++)
    {
        int sum = 0;
        for(int k = 0; k<3; k++)
        {
            if(arr[k][j]==str)
                sum+=1;
            if(sum==3)
                return true;
        }
    }
    if ((arr[0][0]==str)&&(arr[1][1]==str)&&(arr[2][2]==str))
        return true;
    else if ((arr[0][2]==str)&&(arr[1][1]==str)&&(arr[2][0]==str))
        return true;
    else
    {
        return false;
    }
}

int main() {
   
    string board[3][3];
    int num = 1;
    int loop = 0;
    int used_nums[9];
    bool done = false;
    cout<<"Aight so bare with me this isnt touch so wel have to work it out:"<<endl;
    for(int i = 0; i<3; i++)
    {
        for(int j = 0 ; j<3; j++)
        {
            string character  = to_string(num);
            board[i][j] = character;
       
            num+=1;
        }
    }
    for(int i = 0; i<3; i++)
    {
        for(int j = 0 ; j<3; j++)
            cout<<"|  "<<board[i][j]<<"  |";
        cout<<endl;
    }
    cout<<"Ok so we will assume this is the amazing board, whenever you want to place your 'x', just say which number you want, you start! ";
    
    do{
        cout<<"Player 1: ";
        int choice;
        cin>>choice;
        used_nums[loop] = choice;
        
        for(int i = 0; i<3; i++)
        {
            for(int j = 0 ; j<3; j++)
            {
                string character  = to_string(choice);
                if(board[i][j]==character)
                    board[i][j] = 'X';
            }
        }
        cout<<endl;
        for(int i = 0; i<3; i++)
        {
            for(int j = 0 ; j<3; j++)
                cout<<"|  "<<board[i][j]<<"  |";
            cout<<endl;
        }
        if (isDoneO(board))
        {
            cout<<"PLAYER 2 WON!!!!"<<endl;
            done=true;
            break;
        }
        if (isDoneX(board))
        {
            cout<<"PLAYER 1 WON!!!!"<<endl;
            done=true;
            break;
        }
        int choice2;
        cout<<"Alright player 2: ";
        cin>>choice2;
        
        for(int i = 0; i<3; i++)
        {
            for(int j = 0 ; j<3; j++)
            {
                string character  = to_string(choice2);
                if(board[i][j]==character)
                    board[i][j] = 'O';
            }
        }

        for(int i = 0; i<3; i++)
        {
            for(int j = 0 ; j<3; j++)
                cout<<"|  "<<board[i][j]<<"  |";
            cout<<endl;
        }
        if (isDoneO(board))
        {
            cout<<"PLAYER 2 WON!!!!"<<endl;
            done=true;
            break;
        }
        if (isDoneX(board))
        {
            cout<<"PLAYER 1 WON!!!!"<<endl;
            done=true;
            break;
        }
        
    }while (done == false);
}
