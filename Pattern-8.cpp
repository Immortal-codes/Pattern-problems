/*
*********
 *******
  *****
   ***
    *
     
*/

#include<iostream>
using namespace std;

int main()
{
    for(int row=6;row>1;row--)
    {
        
        for (int col = 1; col < 10 ;col++)
        {
            if (col>6-row && col<4+row)
            {
                cout<<"*";
            }
            else
            {
               cout<<" ";
            }
            
            
        }

        cout<<endl;
    
    }
}