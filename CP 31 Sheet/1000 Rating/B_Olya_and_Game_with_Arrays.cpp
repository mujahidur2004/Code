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
        vector<pair<int,int>> fi(n);
        ll ans =0;
        for(int i=0;i<n;i++){
            int m;
            cin >>m;
            vector<int> a(m);
            for(int j=0;j< m;j++){
                cin >> a[j];
            }
            sort(a.begin(), a.end());
            fi[i]= {a[0],a[1]};
           
        }
        sort(fi.begin(),fi.end());
        for(int i=0;i<n ;i++){
             if(i)ans+= fi[i].second;
            else ans+=  fi[i].first;
        }
        cout<<ans<<nl;

        

        
    }

    return 0;
}