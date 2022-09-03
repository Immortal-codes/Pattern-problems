/*
12345
1234
123
12
1
*/

#include<iostream>
using namespace std;

int main()
{
    for(int row=6;row>1;row--)
    {
        for (int col = 1; col < row ;col++)
        {
            cout<<col;
        }

        cout<<endl;
        
    }
}