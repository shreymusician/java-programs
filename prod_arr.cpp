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

    int pa[n];
    int prod = 1;

    for(int i=0; i<n; i++)
        prod *= a[i];

    for(int i=0; i<n; i++)
        pa[i] = prod / a[i];
    
    cout << "Product Array : ";

    for(int x : pa)
    { 
        cout << x << " ";
    }
}