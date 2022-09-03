/*
*
**
***
****
*****
*****
****
***
**
*
*/


#include<iostream>
using namespace std;

int main()
{
    for(int row=0;row<6;row++)
    {
        for (int col = 0; col < row ;col++)
        {
            cout<<"*";
        }

        cout<<endl;
        
    }
    for(int row=6;row>0;row--)
    {
        for (int col = 0; col < row ;col++)
        {
            cout<<"*";
        }

        cout<<endl;
        
    }
}