#include <iostream>

using namespace std;

int main()
{
    int k;
    cout<< "enter the indext of maximum and minimum element to find: ";
    cin>>k;
    int n;
    cout << "enter the size of the array: "<<endl ;
    cin >> n;
    int arr[n];
    cout<<"enter the elements of the array"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {


        if(arr[j]<arr[i])
        {
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;

        }

        }

    }

        cout<<" k maximum = " <<arr[n-k];
        cout<<" k minimum = " <<arr[k-1];




    return 0;
}
