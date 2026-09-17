#include<iostream>
using namespace std;

int main()
{
    for(int r=1; r<=5; r++)
    {
        for(int i=1; i<=r; i++)
        {
            cout << i << " ";
        }

        for(int s = 5-r; s>=0; s--)
        {
            cout << " ";
        }

        cout << endl;
    }
}