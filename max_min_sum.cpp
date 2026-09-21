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

    int max = a[0];
    int min = a[0];

    for(int i=1; i<n; i++)
    {
        if(a[i] > max)
            max = a[i];
        
        if(a[i] < min)
            min = a[i];
    }

    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum += a[i];
    }

    cout << "Min Sum : " << sum - max;
    cout << "\nMax Sum : " << sum - min;
}