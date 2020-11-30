#include <iostream>
#include <climits>>
using namespace std;

int maxProfit(int arr[] , int n)
{
    int curr_price = INT_MAX;
    int profit =0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<curr_price)
            curr_price=arr[i];
        else if(arr[i]-curr_price> profit)
            profit= arr[i]-curr_price;
    }
    return profit;
}


int main()
{
   int arr[] = {7, 1, 5, 3, 6, 4};
   int n = sizeof(arr)/sizeof(arr[0]);

   cout<<"Maximum profit earned: " <<maxProfit(arr,n);

    return 0;
}
