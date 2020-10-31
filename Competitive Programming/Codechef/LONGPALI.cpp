#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n;
	string s;
	cin>>n;
	cin>>s;

	bool t[n][n];

	memset(t, 0, sizeof(t));

	int len = 1;

	for (int i = 0; i < n; ++i)
	{
		t[i][i] = true;
	}

	int start = 0;

	for (int i = 0; i < n-1; ++i)
	{
		if(s[i] == s[i+1])
		{
			t[i][i+1] = true;
			start = i;
			len = 2;
		}
	}

	for (int k = 3; k <= n; ++k)
	{
		for (int i = 0; i < n-k+1; ++i)
		{
			int j = i+k-1;

			if(t[i+1][j-1] && s[i] == s[j])
			{
				t[i][j] = true;

				if(k > len)
				{
					start = i;
					len = k;
				}
			}
		}
	}

	cout<<len<<"\n";

	for (int i = start; i <= start+len-1; ++i)
	{
		cout<<s[i];
	}
	cout<<"\n";
	return 0;
}