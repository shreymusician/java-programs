#include<iostream>
using namespace std;

int main()
{
    int n = 5;

    for(int i=0; i<n; i++)
    {
        for(int j=i; j%n != 4; j=j%n+1)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}