#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s = "He"; int i;

    for(i=0; s[i]!='\0'; i++);

    cout << s[1];
    cout << "\n" << s.length();
}