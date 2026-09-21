#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array : ";
    cin >> n;

    int a[n];

    cout << "Enter array elements : ";

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int large = a[0];
    int seclarge = a[0];

    for(int x : a)
    {
        if(x > large)
            large = x;
        
        if(x < large)
            seclarge = x;
    }

    cout << "Second Largest : " << seclarge;
}