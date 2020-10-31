#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d;
		string s;
		cin>>d;
		cin>>s;
		int att = 0;


		for (int i = 0; i < s.length(); ++i)
		{
			if(s[i] == 'P')
			{
				att++;
			}
		}
		// cout<<att<<"\n";

		double need_att = 0.75*s.length();
		int need_fin_att = ceil(need_att);
		
		int count=0;

		if(att < need_fin_att)
		{
			for (int i = 2; i <= d-3; ++i)
			{
				if(att>=need_fin_att)
				{
					break;
				}
				else
				{
					if((s[i-1]=='P' || s[i-2]=='P') && (s[i+1]=='P' || s[i+2]=='P'))
					{
						att++;
						count++;
					}
				}
			}
		}

		if(att>=need_fin_att)
		{
			cout<<count<<"\n";
		}
		else
		{
			cout<<"-1"<<"\n";
		}
	}
	return 0;
}
		
