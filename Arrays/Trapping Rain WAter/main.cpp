#include <iostream>

using namespace std;

int main()
{
        int n;
        cout<<"enter the size of the array"<<endl;
        cin>>n;
        int arr[n];
        cout<<"ENTER THE ELEMENTS OF THE ARRAY"<<endl;
        for(int i=0;i<n;i++)cin>>arr[n];

        int l[n],r[n];
        int ma,mi;
        ma=l[0]=arr[0];
        mi=r[n-1]=arr[n-1];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>ma)
            {
                ma=arr[i];
            }
            l[i]=ma;
        }
        for(int i=n-2;i>0;i--)
        {
            if(arr[i]>mi)mi=arr[i];
                r[i]=mi;
        }
        int s=0;
        for(int i=0;i<n;i++)
        {
            s += min(l[i],r[i])-arr[i];
        }

        cout<<"ans: " <<s<< endl;

    return 0;
}
