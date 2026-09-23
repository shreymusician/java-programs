#include<iostream>
using namespace std;

int main()
{
    string s;

    cout << "Enter a string : ";
    getline(cin, s);

    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i] >= 'A' and s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }

    cout << "Result : " << s;
}