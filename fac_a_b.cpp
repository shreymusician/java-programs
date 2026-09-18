#include<iostream>
using namespace std;

int main()
{
    int n,a,b;

    cout << "Enter n, a, b : ";
    cin >> n >> a >> b;

    for(int i=1; i<n; i++)
    {
        if((i % a == 0) and (i % b == 0))
        {
            cout << i << " ";
        }
        
    }
}