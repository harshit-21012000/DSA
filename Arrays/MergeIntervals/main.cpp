//Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
// C++ program to merge overlapping Intervals in
// O(n Log n) time and O(1) extra space.
#include<bits/stdc++.h>
using namespace std;


struct Interval
{
	int s, e;
};

bool mycomp(Interval a, Interval b)
{ return a.s < b.s; }

void mergeIntervals(Interval arr[], int n)
{

	sort(arr, arr+n, mycomp);

	int index = 0;
	for (int i=1; i<n; i++)
	{

		if (arr[index].e >= arr[i].s)
		{
			arr[index].e = max(arr[index].e, arr[i].e);
			arr[index].s = min(arr[index].s, arr[i].s);
		}
		else {
			index++;
			arr[index] = arr[i];
		}
	}


	cout << "\n The Merged Intervals are: ";
	for (int i = 0; i <= index; i++)
		cout << "[" << arr[i].s << ", " << arr[i].e << "] ";
}

int main()
{
	Interval arr[] = { {6,8}, {1,9}, {2,4}, {4,7} };
	int n = sizeof(arr)/sizeof(arr[0]);
	mergeIntervals(arr, n);
	return 0;
}
