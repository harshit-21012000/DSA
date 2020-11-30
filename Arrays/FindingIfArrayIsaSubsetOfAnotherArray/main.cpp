//Array Subset of another array


#include <iostream>

using namespace std;

bool findingSubarray (int a1[], int a2[] , int n1 , int n2)
{
    int flag=0;

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(a1[i]==a2[j])
            {
                flag=1;
                break;
            }
            else{flag=0;}
        }
    }
    if(flag=1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int arr1[] = {11, 1, 13, 21, 3, 7};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = { 11, 1, 3, 7};
    int n2 = sizeof(arr1)/sizeof(arr1[0]);

    cout <<"is the array above a subarray of another array: " <<findingSubarray(arr1 , arr2, n1, n2);

    return 0;
}
