#include <iostream>

using namespace std;

int main()
{
     int n;
    cout<<"ENTER THE RANGE OF ARRAY : ";
    cin>>n;
    int a[n];
    cout<<"ENTER THE ELEMENTS OF ARRAY  : ";
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }

    int current=0;
    for(int i=0;i<n;i++)
    {
        current=0;
        for(int j=i;j<n;j++)
        {
            current+=a[j];
                cout<<current<<endl;
        }

    }

    return 0;
}
