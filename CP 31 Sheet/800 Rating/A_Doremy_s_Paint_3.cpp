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
        int n;
        cin >> n;
        vector<ll> a(n),v;
        map<int,int>mp;

        for (int i = 0; i < n; i++){
             cin >> a[i];
             if(!mp[a[i]]) v.push_back(a[i]);
             mp[a[i]]++;
        }
        if(mp.size()==1){
            cout<<"Yes"<<nl;
        }
        else if(mp.size()==2 && abs(mp[v[0]]- mp[v[1]]) <=1  )
        {
            cout<<"Yes"<<nl;
        }
        else cout<<"No"<<nl;
           

        
    }

    return 0;
}