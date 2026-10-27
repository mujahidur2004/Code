/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'
#define gcd __gcd

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        string s;
         cin >> s;
         int cnt0=0,cnt1=0;
         int n = s.size();
         for(int i=0;i<n;i++){
            if(s[i]=='1') cnt1++;
            else cnt0++;
         }
         //cout<<cnt0<<" "<<cnt1;
         int i=0,f=0;
         for(;i<n;i++){
            if( s[i]=='1' ){
                if(cnt0)cnt0--;
                else f=1;
            }
            else{
                if(cnt1)cnt1--;
                else f=1;

            }
            if(f)break;
            //cout<<i<<" ";
         }
         cout<<n-i<<nl;

        
    }

    return 0;
}