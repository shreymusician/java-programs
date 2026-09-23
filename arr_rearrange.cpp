#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements : ";

    for(int i=0; i<n; i++)
        cin >> arr[i];

    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; i<n-1; i++)
        {
            if(arr[j] == -1)
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    cout << "Result : ";

    for(int x : arr)
    {
        cout << x << " ";
    }
}