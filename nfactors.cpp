#include<iostream>
using namespace std;

int main()
{
    int n, count = 1;

    cout << "Enter n : ";
    cin >> n;
   
    for(int i=2; i<=n*n; i++)
    {
        if(n % i == 0)
            count++;
    }

    cout << "Number of Factors : " << count;
}