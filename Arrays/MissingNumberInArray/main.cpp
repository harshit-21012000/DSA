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
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=i+1)
        {
            ans= a[i]-1;

        }

    }
    cout<<"MISSING ELEMENT = " <<ans;
    return 0;
}
