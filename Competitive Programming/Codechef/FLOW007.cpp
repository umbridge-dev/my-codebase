#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n, rev=0;
        cin>>n;
        while(n>0)
        {
            int temp = n%10;
            rev = (rev*10)+temp;
            n = n/10;
        }
        
        cout<<rev<<"\n";
    }
    return 0;
    
}