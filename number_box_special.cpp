#include<iostream>
using namespace std;

int main()
{
    for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=5; c++)
        {
            if(r==1)
            {
               cout << 1 << " ";
            }

            else if(r==5)
            {
                cout << 5 << " ";
            }

            else 
            {
                if(c==1 or c==5)
                {
                    cout << r << "       ";
                }
            }
        }

        cout << endl;
    }
}