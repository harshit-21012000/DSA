#include <iostream>

using namespace std;

int main()
{
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

        cout<<"SORTED ARRAY: " <<endl;
      for(int i=0;i<n;i++)
      {
          cout<<arr[i];


      }



    return 0;
}
