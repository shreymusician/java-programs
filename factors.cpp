#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter n : ";
    cin >> n;

    cout << "Factors : 1 ";
    
    for(int i=2; i<=n*n; i++)
    {
        if(n % i == 0)
            cout << i << " ";
    }
}