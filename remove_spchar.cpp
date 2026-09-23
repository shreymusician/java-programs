#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main()
{
    string s;

    cout << "Enter a string : ";
    getline(cin, s);

    string res;

    for(int i=0; s[i]!='\0'; i++)
    {
        if(isalpha(s[i]) or isdigit(s[i]))
        {
            res.push_back(s[i]);
        }
    }

    cout << "Result : " << res;
}