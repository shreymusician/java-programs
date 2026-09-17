#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number : ";
    cin >> n;

    if((n / 10) / 10 == 0) // Another logic -> number bw 10 and 99
        cout << "Two Digit";

    else
        cout << "Not Two Digit";
}