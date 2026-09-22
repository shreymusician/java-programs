#include<iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter size of first array : "; 
    cin >> n1;

    cout << "Enter size of second array : ";
    cin >> n2;

    int a[n1],  b[n2];

    cout << "Enter first array elements : ";

    for(int i=0; i<n1; i++)
        cin >> a[i];
    
    cout << "Enter second array elements : ";

    for(int i=0; i<n2; i++)
        cin >> b[i];


    int res[n1+n2];
    
    int i=0, j=0, k=0;

    while(i<n1 && j<n2)
    {
        if(a[i] < b[j])
        {
            res[k] = a[i];
            k++; i++;
        }

        else if(a[i] > b[j])
        {
            res[k] = b[j];
            k++; j++;
        }

        else
        {
            res[k] = a[i]; k++;
            res[k] = b[j]; k++;
            i++; j++;
        }
    }

    if(i < n1)
    {
        while(k < n1+n2)
        {
            res[k] = a[i];
            k++; i++;
        }
    }

    else
    {
        while(k < n1+n2)
        {
            res[k] = b[j];
            k++; j++;
        }
    }

    cout << "Result : ";

    for(int x : res)
    {
        cout << x << " ";
    }

   
}