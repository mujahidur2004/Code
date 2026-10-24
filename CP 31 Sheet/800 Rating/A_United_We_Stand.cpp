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
        vector<ll> a(n),b,c;

        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll mx = *max_element(a.begin(), a.end());
        for(auto ele :a){
            if(ele != mx)b.push_back(ele);
            else c.push_back(ele);
        }
        if(b.size()==0)
        {
            cout<<-1<<nl;
        }
        else{
            cout<<b.size()<<" "<< c.size()<<nl;
            for(auto ele :b)cout<< ele<<" ";
            cout<<nl;
            for(auto ele : c)cout<<ele<<" ";
            cout<<nl;
        }
    }

    return 0;
}