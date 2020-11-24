//Given an number n. Find the number of occurrences of n in the array.

#include <iostream>

using namespace std;

int main()
{
     int k;
    cout<< "enter the element who's occurrence is required: ";
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

   int count=0;

   for(int i=0;i<n;i++)
   {

       if(arr[i] == k)
       {
           count++;

       }

   }

   cout<<"occurrence = " <<count;


    return 0;
}
