#include <iostream>

using namespace std;

int main()
{

int arr[] = {1, 4, 45, 6, 10, 8};
int n = sizeof(arr)/sizeof(arr[0]);
int x=13;
int flag=0;
for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-2;j++)
            {
                for(int k=j+1;k<n-1;k++)
                {
                    if(arr[i]+arr[j]+arr[k] == x)
                    {
                        flag=1;
                    }
                    else{
                       flag=1;
                    }
                }
            }
    }

    if(flag==1)
    {
        cout<<"1"<<endl;

    }
    else{
        cout<<"0"<<endl;
    }


    return 0;
}
