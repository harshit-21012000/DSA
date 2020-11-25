//Find duplicates in an array.

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

    for(int i =0 ;i<n;i++)
    {
            int index = abs(a[i]) - 1;
            if(a[index]<0)
            {
                cout<<"duplicate elements are = " <<a[i];

            }
            a[index] = - a[index];
    }




    return 0;
}
