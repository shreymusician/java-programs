#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array : ";
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++)
        cin >> a[i];

    int unique[n];

    for(int i=0; i<n; i++)
    {
        
    }

    cout << "Result : ";
    
    for(int x=0; x<n; x++)
    {
        int count = 1;
        bool isrepeat = False;

        cout << "Count of " << a[x] << " = ";

        for(int j=x; j<n; j++)
        {
            if(a[j] == a[x]) 

                count += 1;
        }

        cout << count << endl;
    }
}