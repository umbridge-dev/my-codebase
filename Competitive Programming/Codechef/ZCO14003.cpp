#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	sort(arr, arr+n);
	long long total_revenue = -1;
	for (int i = 0; i < n; ++i)
	{
		long long current_revenue = arr[i]*(n-i);
		if(current_revenue>total_revenue)
		{
			total_revenue = current_revenue;
		}
	}

	cout<<total_revenue<<"\n";
	return 0;
}
		
