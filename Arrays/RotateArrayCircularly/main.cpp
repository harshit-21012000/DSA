#include <iostream>

using namespace std;

int main()
{
 int n;
    cout<<"ENTER THE RANGE OF ARRAY : ";
    cin>>n;
    int a[n];
    cout<<"ENTER THE ELEMENTS OF ARRAY  : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int x=a[n-1];
    for(int i=n-1;i>0;i--)
    {
        a[i]=a[i-1];

    }
     a[0] = x;
    cout << "rotated array = ";
    for(int i=0;i<n;i++)
        {

            cout<<a[i];
        }

    return 0;
}
