#include <iostream>
using namespace std;

int rvereseArray(int arr[], int start , int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";

   cout << endl;
}


int main() {


	int n;
	cout<<"enter the size of array: "<<endl;
	std::cin >> n;
	int arr[n];
	cout <<" enter the elements of the array = "<<endl;
	for (int i=0;i<=n;i++) {

        	std::cin >> arr[i];
	}

     rvereseArray(arr, 0, n-1);

     cout<<"reverse array: ";

     printArray(arr, n);

	return 0;
}
