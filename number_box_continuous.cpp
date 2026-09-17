#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n = 1;

    for(int i=1; i<=5; i++)
    {
        for(int r=1; r<=5; r++)
        {
            if(n < 10)
            {
                cout << "0" + to_string(n++) << " ";
            }

            else
            {
                cout << to_string(n++) << " ";
            }
            
        }
        cout << endl;
    }
    
}