#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array= ";
    cin >> n;
    int arr[n];
    cout<<"\nEnter elements: "<<endl;
    for (int i=0;i<n;i++)
        cin>>arr[i];
    int maxNO = INT_MIN;
    int minNO = INT_MAX;

    for(int i=0;i<n;i++)
    {
        maxNO = max(maxNO,arr[i]);
        minNO = min(minNO,arr[i]);
    }
    cout<<"MAXIMUM= " <<maxNO << endl;
    cout<<"MINIMUM= " <<minNO << endl;

}
