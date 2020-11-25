//Find common elements in three sorted arrays

#include <iostream>

using namespace std;

int main()
{
   int arr1[] = {1,4,8,9,12,15};
	int n1 = sizeof(arr1) / sizeof(arr1[0]);

   int arr2[] = {2,4,6,8,10,12};
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	int arr3[] = {4,8,12,16,20};
	int n3 = sizeof(arr3) / sizeof(arr3[0]);

	cout<<"COMMON ELEMENTS = ";
     int i=0,j=0,k=0;
	while(i<n1&&j<n2&&k<n3)
    {
        if(arr1[i]<arr2[j] and arr1[i]<arr3[k])
        {
            i++;

        }
        else if (arr2[j]<arr1[i] and arr2[j]<arr3[k])
        {
            j++;
        }
           else if (arr3[k]<arr1[i] and arr3[k]<arr2[j])
           {
               k++;
           }
           else
           {

                cout<<arr3[k]<<" ";
            i++;
            j++;
            k++;
           }

    }



    return 0;
}
