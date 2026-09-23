#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

int main()
{
    string s;
    string vow = "AEIOUaeiou";
    int count = 0;
    int alp = 0;
    int num = 0;
    int sp = 0;

    cout << "Enter a string : ";
    getline(cin, s);

    int len = s.length();

    for(int i=0; s[i] != '\0'; i++)
    {
        if(isalpha(s[i]))
            alp++;

        if(isdigit(s[i]))
            num++;

        if(isspace(s[i]))
            sp++;

        for(int j=0; vow[j] != '\0'; j++)
        {
            if(s[i] == vow[j])
                count++;
        }
    }

    int special = len - (num + alp + sp);

    cout << "\nVowels : " << count;
    cout << "\nConsonants : " << len-count;
    cout << "\nAlphabets : " << alp;
    cout << "\nNumbers : " << num;
    cout << "\nSpaces : " << sp;
    cout << "\nSpecial Characters : " << special;

}