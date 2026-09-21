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

    cout << "Pairs : \n";

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            cout << "(" << a[i] << "," << a[j] << ")" << endl;
        }
    }

   
}