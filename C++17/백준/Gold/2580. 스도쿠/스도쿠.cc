#include <bits/stdc++.h>
using namespace std;
int board[9][9];

bool check(int x, int y, int num)
{
    for(int i = 0; i<9; i++)
    {
        if(board[x][i] == num){return false;}
        if(board[i][y] == num){return false;}
    }

    int nx = (x/3)*3;
    int ny = (y/3)*3;

    for(int i = nx; i<nx+3; i++)
    {
        for(int j = ny; j<ny+3; j++)
        {
            if(board[i][j] == num) return false;
        }
    }
    return true;

}

bool DFS()
{
    for(int i = 0; i<9; i++)
    {
        for(int j = 0; j<9; j++)
        {
            if(board[i][j] ==0)
            {
                for(int num = 1; num<=9; num++)
                {
                    if(check(i,j,num))
                    {
                        board[i][j] = num;
                        if(DFS()) {return true;}
                        board[i][j] = 0; 
                    }
                }
             return false;
            }
        }
    }
    return true;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    for(int i = 0; i<9; i++)// 스도쿠 값 입력받기
    {
        for(int j = 0; j<9; j++)
        {
            cin>>A;
            board[i][j] = A; 
        }
    }

    DFS();

    for(int i = 0; i<9; i++)
    {
        for(int j = 0; j<9; j++)
        {
            cout<<board[i][j]<<" ";

        }
        cout<<"\n";
    }




}