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
        int n , k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int cnt=0;
        for(auto ele :mp){
            if(ele.second % 2) cnt++;

        }
        if( cnt-k  >1)cout <<"NO"<<nl;
        else cout <<"YES"<<nl;

        
    }

    return 0;
}