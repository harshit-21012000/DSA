#include <iostream>

using namespace std;

int printUnion(int arr1[], int arr2[], int n , int m )
{
    int i=0, j=0;
     while(i<n && j<m)
     {
         if (arr1[i]<arr2[j])
         {
             cout<<" UNION : " << arr1[i++]<<" ";

         }
         else if (arr2[j]<arr1[i])
         {

             cout<< " UNION : " <<arr2[j++]<<" " ;
         }
         else{
            cout<< " UNION : " <<arr1[i++] << " ";
            j++;
         }

     }

     while(i<n)
     {

         cout<< arr1[i++] << " ";
     }
     while(j<m)
     {

         cout<< arr2[j++] << " ";
     }

}
int printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    int n;
    cout<<"ENTER THE RANGE OF ARRAY 1: ";
    cin>>n;
    int a1[n];
    cout<<"ENTER THE ELEMENTS OF ARRAY 1 : ";
    for(int i=0;i<n;i++)
    {

        cin>>a1[i];
    }
    int m;
    cout<<"ENTER THE RANGE OF ARRAY 2: ";
    cin>>m;
    int a2[m];
    cout<<"ENTER THE ELEMENTS OF ARRAY 2 : ";
    for(int i=0;i<m;i++)
    {

        cin>>a2[m];
    }

    cout<<"UNION OF THE ARRAY : " <<endl;
    printUnion(a1 , a2 , n , m);

    cout<< "INTERSECTION OF THE TWO ARRAYS : " <<endl;
     printIntersection(a1 , a2 , n , m);

    return 0;
}
