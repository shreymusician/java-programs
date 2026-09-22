#include<iostream>
using namespace std;

void print_subarr(int arr[], int n, int size)
{
    for(int i=0; i<=n-size; i++)
    {
        for(int j=i; j<i+size; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter size : "; cin >> n;

    int a[n];
    cout << "Enter array elements : ";

    for(int i=0; i<n; i++)
        cin >> a[i];
    
    cout << endl;
    
    for(int i=1; i<n; i++)
    {
        print_subarr(a, n, i);
        cout << endl;
    }
}