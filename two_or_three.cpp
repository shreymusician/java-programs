#include<iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number : ";
    cin >> num;

    if( (num % 2 == 0) and (num % 3 == 0))
        cout << "Divisible";
    
    else
        cout << "Not Divisible";
}