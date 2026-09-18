#include<iostream>
using namespace std;

int main()
{
    int n,x;

    cout << "Enter n and x : ";
    cin >> n >> x;

    for(int i=1; i<x; i++)
    {
        if(n % i == 0)
        {
            cout << i << " ";
        }
        
    }
}