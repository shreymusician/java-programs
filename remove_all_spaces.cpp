#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string : ";
    getline(cin, str);

    int len = str.length();
    int s=0, e=len-1; 

    while(s < e)
    {
        if(isalpha(str[s]) and isalpha(str[e]))
        {
            break;
        }

        else
        {
            s++; e--;
        }
    }

    string res;

    for(int i=s; i<=e; i++)
    {
        if(!isspace(str[i]))
            res.push_back(str[i]);
        
        if(isspace(str[i]) and isalpha(str[i+1]))
            res.push_back(' ');
    }

    

    cout << "Result : " << res;
}