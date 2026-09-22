#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size : "; cin >> n;

    int a[n];
    cout << "Enter array elements : ";

    for(int i=0; i<n; i++)
        cin >> a[i];
    
    int size;

    cout << "Enter subarray size : ";
    cin >> size;

    for(int i=0; i<=n-size; i++)
    {
        int sum = 0;

        for(int j=i; j<i+size; j++)
        {
            sum += a[j];
            cout << a[j] << " ";
        }
        cout << " Sum : " << sum;
        cout << endl;
    }
}