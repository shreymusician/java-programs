#include<iostream>
using namespace std;

int main()
{
    for(int r=1; r<=5; r++)
    {
        for(int i=5-r; i>=0; i--)
        {
            cout << "  ";
        }

        for(int i=1; i<=r; i++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}