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

    int ans=2;
    int f = a[1];
    int s =a[0];
    int pd = f-s ;
    int j=2;
    int curr=2;

    while(j<2)
    {

        if(pd = a[j] - a[j-1])
        {

            curr++;
        }
        else
        {
            pd = a[j]-a[j-1];
            curr=2;
        }
        ans = max(ans , curr);
        j++;
    }
    cout << "LENGTH OF LOGEST AIRTHMATIC SUBARRAY: " <<ans<<endl;

    return 0;
}
