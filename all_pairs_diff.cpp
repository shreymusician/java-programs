#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, k;

    cout << "Enter size of array : ";
    cin >> n;

    cout << "Enter k : ";
    cin >> k;

    int a[n];

    cout << "Enter array elements : ";

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    cout << "Pairs : \n";

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(abs(a[i]-a[j]) == k)
                cout << "(" << a[i] << "," << a[j] << ")" << endl;
        }
    }

   
}