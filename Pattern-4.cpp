/*
1
22
333
4444
55555
*/

#include<iostream>
using namespace std;

int main()
{
    for(int row=0;row<6;row++)
    {
        for (int col = 0; col < row ;col++)
        {
            cout<<row;
        }

        cout<<endl;
        
    }
}