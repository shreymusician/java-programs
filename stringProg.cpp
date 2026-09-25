#include<iostream>
using namespace std;

int main()
{
    string str, res;
    cout << "Enter string : ";
    getline(cin, str);

    int i=0;

    while(i < str.length()-1)
    {
        if(str[i+1] == str[i])
        {
            res.push_back(str[i]);
            i += 2;
        }

        else 
        {
            res.push_back(str[i]);
            i++;
        }
    }

    cout << "Result : " << res;
}