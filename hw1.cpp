#include<iostream>
using namespace std;

int main()
{
    for(int r=1; r<=5; r++)
    {
        for(int i=5-r; i>0; i--)
        {
            cout << " ";
        }

        cout << "*";

        if(r > 1)
        {
            for(int j=2*r-3; j>0; j--)
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }
}