#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    string vow = "AEIOUaeiou";
    int count = 0;

    cout << "Enter a string : ";
    cin >> s;

    for(int i=0; s[i] != '\0'; i++)
    {
        for(int j=0; vow[j] != '\0'; j++)
        {
            if(s[i] == vow[j])
                count++;
        }
    }

    cout << "Number of Consonants : " << s.length()-count;
}
