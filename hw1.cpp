#include<iostream>
using namespace std;

int main()
{
    for(int r=1; r<=5; r++)
    {
        cout << "* ";

        for(int s=5-r; s>=0; s--)
        {
            cout << " ";
        }

        cout << "*\n"
    }
}