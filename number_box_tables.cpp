#include<iostream>
#include<string>
using namespace std;

int main()
{
    for(int r=1; r<=5; r++)
    {
        for(int i=1; i<=5; i++)
        {
            if(r*i < 10)
            {
                cout << "0" + to_string(r*i) << " ";
            }

            else 
            {
                cout << r*i << " ";
            }
        }
        cout << endl;
    }
}