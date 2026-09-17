#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number : ";
    cin >> n;

    if(n%10 == 0)
        cout << "Last Digit 0";
    
    else
        cout << "Last Digit not 0";
}