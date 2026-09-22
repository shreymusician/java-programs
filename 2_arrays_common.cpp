#include<iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter size of first array : "; 
    cin >> n1;

    cout << "Enter size of second array : ";
    cin >> n2;

    int a[n1], b[n2];

    cout << "Enter first array elements : ";

    for(int i=0; i<n1; i++)
        cin >> a[i];
    
    cout << "Enter second array elements : ";

    for(int i=0; i<n2; i++)
        cin >> b[i];

    cout << "Common Elements : ";

    int i=0, j=0;

    while(i<n1 && j<n2)
    {
        if(a[i] == b[j])
        {
            cout << a[i] <<  " ";
            i++; j++;
        }

        else if(a[i] < b[j])
        {
            i++;
        }

        else
        {
            j++;
        }
    }
}