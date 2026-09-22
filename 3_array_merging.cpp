#include<iostream>
using namespace std;

int main()
{
    int n1=3, n2=4, n3=5;
    int a[] = {2,3,4}, b[] = {5,6,7,8}, c[] = {9, 10, 11, 12, 13};

    int res[n1+n2+n3];

    for(int i=0, x=0; i<n1; i++, x+=3)
    {
        res[x] = a[i];
    }

    for(int j=1, x=0; j<n2; j++, x+=3)
    {
        res[x] = b[j];
    }

    for(int k=2, x=0; k<n3; k++, x+=3)
    {
        res[x] = c[k];
    }

    cout << "Result : ";

    for(int ele : res)
        cout << ele << " ";
}